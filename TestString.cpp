#include "TestString.h"
#include <QtTest/QtTest>
void TestQString::toUpper()
{
    QString str = "Hello";
    QVERIFY(str.toUpper() == "HELLO");
}
QTEST_MAIN(TestQString)
//#include "testqstring.moc"
