#include <QVBoxLayout>
#include <QLabel>
#include <iostream>
#include "gui.hpp"

Gui::Gui(QWidget* parent) : QWidget(parent) {
	setFixedSize(300,300);
	QVBoxLayout *main = new QVBoxLayout;
	QLabel* dummy = new QLabel("Press and release the mouse wherever you want and see what happens in the terminal...");
	dummy->setWordWrap(true);
	main->addWidget(dummy);
	setLayout(main);
	show();
}

Gui::~Gui(){}

void Gui::mousePressEvent(QMouseEvent* event) {
	std::cout << "[PRESS] (" << event->x() << "," << event->y() << ")" << std::endl;
}

void Gui::mouseReleaseEvent(QMouseEvent *event) {
	std::cout << "[RELEASE] (" << event->x() << "," << event->y() << ")" << std::endl; 
}
