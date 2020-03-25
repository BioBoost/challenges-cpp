Human::Human(void) {
  name = "Unknown";
}

Human::Human(std::string name) {
  this->name = name;
}

std::string Human::to_string(void) {
  return "Hello, my name is " + name;
}