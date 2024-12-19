/* Platon Lukyanov st128133@student.spbu.ru
 * Problem 6
 */
#include <vector>

#include "TemplateClass.h"
#include "gtest/gtest.h"

TEST(TemplateClass,
     returns_true_when_dealing_with_class1_and_positive_numbers) {
    TemplateClass<Class1> templateClass1;
    int positiveNumber = 100;
    templateClass1.setNumber(positiveNumber);
    ASSERT_TRUE(templateClass1.foo());
}

TEST(TemplateClass,
     returns_true_when_dealing_with_class2_and_non_empty_vectors) {
    TemplateClass<Class2> templateClass2;
    std::vector<float> nonEmptyVector = {0.1, 0.2, 0.3};
    templateClass2.setFloats(nonEmptyVector);
    ASSERT_TRUE(templateClass2.foo());
}

TEST(
    TemplateClass,
    returns_true_when_dealing_with_class3_and_negative_number_equal_to_length) {
    TemplateClass<Class3> templateClass3;
    std::vector<float> nonEmptyVector = {0.1, 0.2, 0.3};
    int number = -3;
    templateClass3.setNumber(number);
    templateClass3.setFloats(nonEmptyVector);
    ASSERT_TRUE(templateClass3.foo());
}

TEST(TemplateClass,
     returns_false_when_dealing_with_class1_and_non_positive_numbers) {
    TemplateClass<Class1> templateClass1;
    int nonPositiveNumber = 0;
    templateClass1.setNumber(nonPositiveNumber);
    ASSERT_FALSE(templateClass1.foo());
}

TEST(TemplateClass, returns_false_when_dealing_with_class2_and_empty_vectors) {
    TemplateClass<Class2> templateClass2;
    std::vector<float> emptyVector = {};
    templateClass2.setFloats(emptyVector);
    ASSERT_FALSE(templateClass2.foo());
}

TEST(
    TemplateClass,
    returns_false_when_dealing_with_class3_and_negative_number_not_equal_to_length) {
    TemplateClass<Class3> templateClass3;
    std::vector<float> nonEmptyVector = {0.1, 0.2, 0.3};
    int number = -4;
    templateClass3.setNumber(number);
    templateClass3.setFloats(nonEmptyVector);
    ASSERT_FALSE(templateClass3.foo());
}

TEST(TemplateClass, return_true_when_dealing_with_ints) {
    TemplateClass<int> templateClassInt;
    ASSERT_TRUE(templateClassInt.foo());
}

TEST(TemplateClass, return_false_when_dealing_with_doubles) {
    TemplateClass<double> templateClassDouble;
    ASSERT_FALSE(templateClassDouble.foo());
}
