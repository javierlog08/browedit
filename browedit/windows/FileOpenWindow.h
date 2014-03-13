#pragma once

#include <list>

#include <blib/wm/widgets/list.h>
#include <blib/wm/Window.h>

class FileOpenWindow : public blib::wm::Window
{
	blib::wm::widgets::List* lstFiles;
	std::list<std::string> files;
public:
	FileOpenWindow(blib::ResourceManager* resourceManager);

	void btnOpenClick(int x, int y);
	void filter(char key);
};