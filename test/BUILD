load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "atm-test",
    srcs = ["atm-test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:gtest",
        "//main:controller",
    ]
)

