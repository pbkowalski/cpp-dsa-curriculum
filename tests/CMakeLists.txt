# Create test executable
add_executable(dsa_tests
    data_structures/test_stack.cpp    # Path updated
    # Add other test files as you create them
)

target_link_libraries(dsa_tests PRIVATE dsa_lib Catch2::Catch2)
add_test(NAME dsa_tests COMMAND dsa_tests)