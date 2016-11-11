#include <QWidget>
#include <QMouseEvent>

class Gui : public QWidget {
	Q_OBJECT
public:
	Gui(QWidget* parent=0);
	~Gui();
protected:
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
};
