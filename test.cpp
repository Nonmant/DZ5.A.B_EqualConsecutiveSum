#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_ENABLE_BENCHMARKING
#include "catch.hpp"

TEST_CASE("Catch operability", "[simple]"){
    REQUIRE(1+1 == 2);
}

#include "funcs.h"

TEST_CASE("test 1, file", "[simple]"){
    std::ofstream inputPrepare;
    inputPrepare.open ("input.txt", std::ofstream::trunc);
    inputPrepare<<
                "5 17\n"
                "17 7 10 7 10"
            ;
    inputPrepare.close();

    std::ifstream input( "input.txt", std::ofstream::in);
    std::ofstream output("output.txt", std::ofstream::trunc);
    parseFile(input,output);
    input.close();
    output.close();

    std::ifstream outputCheck("output.txt", std::ofstream::in);
    std::stringstream buffer;
    buffer<<outputCheck.rdbuf();
    outputCheck.close();
    REQUIRE(buffer.str() ==
            "4"
    );
}

TEST_CASE("test 2", ""){
    std::stringstream input(
            "5 10\n"
            "1 2 3 4 1"
            );
    std::stringstream output;
    parseFile(input,output);
    REQUIRE(output.str() ==
            "2"
    );
}

TEST_CASE("mine", ""){
    std::stringstream input(
            "8 5\n"
            "1 2 3 3 2 2 1 2"
    );
    std::stringstream output;
    parseFile(input,output);
    REQUIRE(output.str() ==
            "4"
    );
}

TEST_CASE("one element, equal", ""){
    std::stringstream input(
            "1 5\n"
            "5"
    );
    std::stringstream output;
    parseFile(input,output);
    REQUIRE(output.str() ==
            "1"
    );
}

TEST_CASE("one element, not equal", ""){
    std::stringstream input(
            "1 5\n"
            "1"
    );
    std::stringstream output;
    parseFile(input,output);
    REQUIRE(output.str() ==
            "0"
    );
}

TEST_CASE("two elements, both equal", ""){
    std::stringstream input(
            "2 5\n"
            "5 5"
    );
    std::stringstream output;
    parseFile(input,output);
    REQUIRE(output.str() ==
            "2"
    );
}

TEST_CASE("two elements, one equal", ""){
    std::stringstream input(
            "2 5\n"
            "5 1"
    );
    std::stringstream output;
    parseFile(input,output);
    REQUIRE(output.str() ==
            "1"
    );
}

TEST_CASE("sum of all", ""){
    std::stringstream input(
            "3 5\n"
            "1 1 3"
    );
    std::stringstream output;
    parseFile(input,output);
    REQUIRE(output.str() ==
            "1"
    );
}
