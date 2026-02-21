#include <QApplication>
#include <QPushButton>

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    QPushButton button("Elytra Studio !!!!!");
    button.setToolTip("Time to make a PCK !!!!");
    button.show();

    return app.exec();
}
