#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QLayout>
#include <QMessageBox>

class AnaPencere: public QMainWindow
{
	Q_OBJECT
	public:
		QLabel *etiket;
		QPushButton *button, *closebutton;
		QLineEdit *satir;

	AnaPencere():QMainWindow()
	{
		setWindowTitle("aykterdl");

		QWidget *center = new QWidget(this);
		setCentralWidget(center);

		etiket = new QLabel("Selam",center);
		button = new QPushButton("Click!",center);
		closebutton = new QPushButton("Close",center);
		satir = new QLineEdit(center);

		QVBoxLayout *ana = new QVBoxLayout(center);
		ana->addWidget(etiket);

		QHBoxLayout *hor = new QHBoxLayout();
		hor-> addWidget(satir);
		hor-> addWidget(button);
		hor-> addWidget(closebutton);

		ana-> addLayout(hor);

		//connect(closebutton,SIGNAL(clicked()),this,SLOT(quit()));
		connect(button,SIGNAL(clicked()),this,SLOT(slotButon()));
		connect(button,SIGNAL(returnPressed()),this,SLOT(slotButon()));


		resize(400,200);
		show();
	}
	public slots:
	void slotButon()
	{
		QMessageBox::warning(this,"Tebrikler",satir->text());
	}
	/*public slots:
	void closeSlot()
	{
		AnaPencere().close();
	}*/
};