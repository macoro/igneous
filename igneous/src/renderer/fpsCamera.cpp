#include "igneous/renderer/fpsCamera.hpp"

#include <glm/gtx/euler_angles.hpp>
#include <glm/gtx/rotate_vector.hpp>

#include "igneous/core/input.hpp"
#include "igneous/core/log.hpp"

namespace igneous {
void FPSCamera::update(const float dt)
{
	float speed = 5.0f;
	if (input::keys[IG_KEY_LEFT_SHIFT]) speed = 10.0f;

	//Calculate change in mouse position
	double dx = input::mouseX - last_x;
	double dy = input::mouseY - last_y;

	//Rotate
	glm::vec3 ro = glm::vec3();

	//Yaw
	ro.y += (float)dx * dt;
	if (input::keys[IG_KEY_LEFT]) ro.y -= speed * dt;
	if (input::keys[IG_KEY_RIGHT]) ro.y += speed * dt;
	rotateGlobal(glm::vec3(0.0f, ro.y, 0.0f));

	//Pitch
	ro.x += (float)dy * dt;
	if (input::keys[IG_KEY_UP]) ro.x -= speed * dt;
	if (input::keys[IG_KEY_DOWN]) ro.x += speed * dt;
	rotateLocal(glm::vec3(ro.x, 0.0f, 0.0f));
	clampPitch(glm::radians(-90.0f), glm::radians(90.0f));

	//Translate
	glm::vec3 mv = glm::vec3();

	//Z
	if (input::keys[IG_KEY_W]) mv += forward * speed * dt;
	if (input::keys[IG_KEY_S]) mv -= forward * speed * dt;
	//X
	if (input::keys[IG_KEY_A]) mv += left * speed *  dt;
	if (input::keys[IG_KEY_D]) mv -= left * speed *  dt;
	translateLocal(mv);

	//Y
	if (input::keys[IG_KEY_SPACE]) mv += up * speed *  dt;
	if (input::keys[IG_KEY_LEFT_CONTROL]) mv -= up * speed *  dt;
	translateGlobal(glm::vec3(0.0f, mv.y, 0.0f));

	last_x = input::mouseX;
	last_y = input::mouseY;
}

void FPSCamera::translateLocal(const glm::vec3& ds)
{
	translateGlobal(glm::rotate(ds, getYaw(), up));
}
} // end namespace igneous
