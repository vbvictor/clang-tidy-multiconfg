namespace lib2 {

class Storage {
 public:
  int GetValue() { return value_; }

  void SetValue(int new_value) { value_ = new_value; }

 private:
  int value_;  // Can not use "_" because of clang-tidy

  void BigMethod() { int tmp_value = 2; }
};

}  // namespace lib2