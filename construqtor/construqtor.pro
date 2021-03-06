TEMPLATE = app

SOURCES += main.cpp \
mainwindow.cpp \
cqworld.cpp \
cqsimulation.cpp \
cqphysicalbody.cpp \
cqphysicalbox.cpp \
cqmaterial.cpp \
cqjoint.cpp \
cqrevolutejoint.cpp \
cqnail.cpp \
cqitem.cpp \
mainview.cpp \
ceeditoritem.cpp \
cqgirder.cpp \
cqphysicaldisk.cpp \
cqwheel.cpp \
cqwheelwithengine.cpp \
cqcompounditem.cpp \
cqmotorcontroller.cpp \
cqrevolutevelocitycontroler.cpp \
controllerwidget.cpp \
cqbolt.cpp \
 cqpolygonalbody.cpp \
 cqpolygontriangulator.cpp \
 cqstone.cpp \
 cqgroundbody.cpp \
 cqfragilerevolutejoint.cpp \
 cqdocument.cpp \
 cqelement.cpp \
 cqitemfactory.cpp \
 cqgroupitem.cpp \
 cqclipboard.cpp \
 cqprismaticjoint.cpp \
 cqhydrauliccylinder.cpp \
 cqprismatictraslationcontroller.cpp \
 cqpallet.cpp \
 gamemanager.cpp \
 difficultyselector.cpp
FORMS += mainwindow.ui \
ControllerWidget.ui \
difficultyselector.ui
HEADERS += mainwindow.h \
cqworld.h \
cqsimulation.h \
cqphysicalbody.h \
cqphysicalbox.h \
cqmaterial.h \
cqjoint.h \
cqrevolutejoint.h \
cqnail.h \
cqitemtypes.h \
cqitem.h \
mainview.h \
ceeditoritem.h \
cqgirder.h \
cqphysicaldisk.h \
cqwheel.h \
cqwheelwithengine.h \
cqcompounditem.h \
cqmotorcontroller.h \
cqrevolutevelocitycontroler.h \
controllerwidget.h \
cqbolt.h \
 cqpolygonalbody.h \
 cqpolygontriangulator.h \
 cqstone.h \
 cqgroundbody.h \
 cqfragilerevolutejoint.h \
 gexception.h \
 cqdocument.h \
 cqelement.h \
 cqitemfactory.h \
 cqgroupitem.h \
 cqclipboard.h \
 cqprismaticjoint.h \
 cqhydrauliccylinder.h \
 cqprismatictraslationcontroller.h \
 cqpallet.h \
 gamemanager.h \
 difficultyselector.h
CONFIG += debug \
qt \
warn_on \
rtti \
opengl
QT += core \
gui \
xml \
svg \
opengl
TARGET = ../bin/construqtor

OBJECTS_DIR = .obj

UI_DIR = .ui

MOC_DIR = .moc

DISTFILES += FETUREPLAN

CONFIG -= release

INCLUDEPATH += ../box2d \
../gpc \
. \
../box2d/Dynamics/Joints \
../box2d/Collision \
../box2d/Dynamics \
../box2d/Common
LIBS += ../lib/libbox2d.a \
../lib/libgpc.a
TARGETDEPS += ../lib/libbox2d.a \
../lib/libgpc.a
RESOURCES += ../graphics/graphics.qrc

