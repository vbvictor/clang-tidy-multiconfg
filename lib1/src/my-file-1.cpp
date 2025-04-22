namespace lib1 {

class Storage {
 public:
  int GetValue() { return value_; }

  void SetValue(int new_value) { value_ = new_value; }

 private:
  int value_;

  void BigMethod() {  // Exceeds nesting threshold and cognitive complexity
    value_ = 0;
  }
};

}  // namespace lib1