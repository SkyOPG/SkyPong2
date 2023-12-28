#include <window/create.hpp>
#include <window/destroy.hpp>
#include <keys/key.hpp>
#include <renderer/render.hpp>

int main(int argc, char* argv[]){
	bool isOpen = true;
	window Window = {
		"idk",
		500,
		800,
		true,
		60
	};
	makeWindow(Window);

	while(isOpen){
		// Key listener
		if(GetKey(KEY_Q).KeyPressed){
			isOpen = false;
		}
		// Game Loop
		StartDrawing();
		FinishDrawing();
	}

	DestroyWindow();
}