all:
	g++ src/**/* -o build/skypong.out -I./incl/linux -L./lib/linux -lraylib
	x86_64-w64-mingw32-g++ src/**/* -o build/sp.exe -I./incl/windows -L./lib/windows -lraylib -lopengl32 -lgdi32 -lwinmm