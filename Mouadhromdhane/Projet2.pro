QT       += core gui
QT       +=sql
QT       +=printsupport
QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    autres.cpp \
    connexion.cpp \
    dialog.cpp \
    dialog1.cpp \
    dialog2.cpp \
    dialog3.cpp \
    dialog4.cpp \
    dialog44.cpp \
    dialog5.cpp \
    dialog55.cpp \
    dialog6.cpp \
    dialog66.cpp \
    dialog_.cpp \
    dialog_1.cpp \
    dialog_2.cpp \
    dialog_3.cpp \
    dialog_4.cpp \
    dialog_44.cpp \
    dialog_5.cpp \
    dialog_55.cpp \
    dialog_6.cpp \
    dialog_66.cpp \
    dialog__1.cpp \
    dialog__2.cpp \
    dialog__3.cpp \
    dialog__4.cpp \
    dialog__44.cpp \
    dialog__5.cpp \
    dialog__55.cpp \
    dialog__6.cpp \
    dialog__66.cpp \
    main.cpp \
    mainwindow.cpp \
    recherche1.cpp \
    recherche2.cpp \
    recherche3.cpp \
    recherche_1.cpp \
    recherche_2.cpp \
    recherche_3.cpp \
    revenus.cpp

HEADERS += \
    autres.h \
    connexion.h \
    depenses.h \
    dialog.h \
    dialog1.h \
    dialog2.h \
    dialog3.h \
    dialog4.h \
    dialog44.h \
    dialog5.h \
    dialog55.h \
    dialog6.h \
    dialog66.h \
    dialog_.h \
    dialog_1.h \
    dialog_2.h \
    dialog_3.h \
    dialog_4.h \
    dialog_44.h \
    dialog_5.h \
    dialog_55.h \
    dialog_6.h \
    dialog_66.h \
    dialog__1.h \
    dialog__2.h \
    dialog__3.h \
    dialog__4.h \
    dialog__44.h \
    dialog__5.h \
    dialog__55.h \
    dialog__6.h \
    dialog__66.h \
    mainwindow.h \
    recherche1.h \
    recherche2.h \
    recherche3.h \
    recherche_1.h \
    recherche_2.h \
    recherche_3.h \
    revenus.h

FORMS += \
    autres.ui \
    dialog.ui \
    dialog1.ui \
    dialog2.ui \
    dialog3.ui \
    dialog4.ui \
    dialog44.ui \
    dialog5.ui \
    dialog55.ui \
    dialog6.ui \
    dialog66.ui \
    dialog_.ui \
    dialog_1.ui \
    dialog_2.ui \
    dialog_3.ui \
    dialog_4.ui \
    dialog_44.ui \
    dialog_5.ui \
    dialog_55.ui \
    dialog_6.ui \
    dialog_66.ui \
    dialog__1.ui \
    dialog__2.ui \
    dialog__3.ui \
    dialog__4.ui \
    dialog__44.ui \
    dialog__5.ui \
    dialog__55.ui \
    dialog__6.ui \
    dialog__66.ui \
    mainwindow.ui \
    recherche1.ui \
    recherche2.ui \
    recherche3.ui \
    recherche_1.ui \
    recherche_2.ui \
    recherche_3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
