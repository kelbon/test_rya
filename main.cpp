#include <string_view>

#include <ryml.hpp>

std::string yaml2json(std::string_view yaml) {
  ryml::Tree tree =
      ryml::parse_in_arena(ryml::csubstr(yaml.data(), yaml.size()));
  return ryml::emitrs_json<std::string>(tree);
}

int main() { yaml2json("hello world"); }
