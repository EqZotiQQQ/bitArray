TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt


INCLUDEPATH += "../"
INCLUDEPATH += "test/"
INCLUDEPATH += "test/include/"


SOURCES += \
        main.cpp \
    ../bit_array.cpp\
    test/src/gtest.cc \
    test/src/gtest-all.cc \
    test/src/gtest-death-test.cc \
    test/src/gtest-filepath.cc \
    test/src/gtest-port.cc \
    test/src/gtest-printers.cc \
    test/src/gtest-test-part.cc \
    test/src/gtest-typed-test.cc

HEADERS += \
    ../bit_array.h \
    test/include/gtest/gtest.h \
    test/include/gtest/gtest_pred_impl.h \
    test/include/gtest/gtest_prod.h \
    test/include/gtest/gtest-death-test.h \
    test/include/gtest/gtest-message.h \
    test/include/gtest/gtest-param-test.h \
    test/include/gtest/gtest-printers.h \
    test/include/gtest/gtest-spi.h \
    test/include/gtest/gtest-test-part.h \
    test/include/gtest/gtest-typed-test.h
