//dae namespace for core of the engine only!
//main, core, managers, helpers and scene
//
//Components and other parts that add on top of this core functionality should not have it!

#include "TheBreukenEnginePCH.h"

#if _DEBUG
// ReSharper disable once CppUnusedIncludeDirective
#include <vld.h>
#endif

#include "SDL.h"
#include "TheBreukenEngine.h"

int main(int, char*[]) 
{
	breuk::TheBreukenEngine engine;
	engine.Run();

    return 0;
}