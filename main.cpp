#include <rapidfuzz/fuzz.hpp>

int main(int,char**)
{
  std::string test = "aaaa";
  std::string no_suffix = "aaa";
  std::string no_suffix2 = "aaab";
  std::string swapped1 = "abaa";
  std::string swapped2 = "baaa";
  std::string replace_all = "bbbb";

  rapidfuzz::levenshtein::weighted_distance(test, test);
  rapidfuzz::levenshtein::normalized_weighted_distance(test, test);
}