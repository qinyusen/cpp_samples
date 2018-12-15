#include <string>

namespace Params{
    static constexpr float p1_1 = 0.1f;
    static constexpr float p1_2 = 0.2f;

class params{
  public:
    params();
    ~params();
    float p1_0 = 0.3f;
    const float *p1;
    std::string *s;
    static const std::string s1_1;
    static const std::string s1_2;

    int init(int type);
};

}