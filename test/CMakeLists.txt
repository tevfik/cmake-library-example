INCLUDE_DIRECTORIES(${TEST_SOURCE_DIR}/src)

ADD_EXECUTABLE(test-reverse test-reverse.c)

TARGET_LINK_LIBRARIES(test-reverse
                        str-util
                        )

ADD_TEST(NAME TestStringReverse COMMAND test-reverse)