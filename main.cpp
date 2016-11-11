#include <QApplication>
#include "gui.hpp"

int main(int argc, char* argv[]) {
	QApplication app(argc, argc + argv);	
	Gui gui;
	gui.show();
	return app.exec();
}
