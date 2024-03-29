#ifndef scene_manager_h
#define scene_manager_h

#include "variables.h"

namespace FlappyBird 
{
	class SceneManager
	{
	private:
		Scenes currentScene;
	public:
		SceneManager();

		void SetCurrentScene(Scenes currentScene);
		Scenes GetCurrentScene();
	};
}

#endif

