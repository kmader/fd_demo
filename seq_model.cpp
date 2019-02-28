// seq_model.cpp
#include <fdeep/fdeep.hpp>
int main()
{
    std::cout << "Loading model" << std::endl;
    const auto model = fdeep::load_model("../simple_seq.json");
    std::cout << "Running all zeros: "<< std::endl;
    fdeep::tensor5 input_seq(fdeep::shape5(1, 1, 1, 224, 1), 0);
    const auto result = model.predict({input_seq});
    std::cout << fdeep::show_tensor5s(result) << std::endl;
}
