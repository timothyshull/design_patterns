#ifndef DESIGN_PATTERNS_BUILDER_H
#define DESIGN_PATTERNS_BUILDER_H

#include<string>

class Product;

class Builder {
public:
    virtual ~Builder();

    virtual void build_part_a(const std::string& build_parameter) = 0;

    virtual void build_part_b(const std::string& build_parameter) = 0;

    virtual void build_part_c(const std::string& build_parameter) = 0;

    virtual Product* get_product() = 0;

protected:
    Builder();
};

class Concrete_builder : public Builder {
public:
    Concrete_builder();

    ~Concrete_builder();

    void build_part_a(const std::string& build_parameter);

    void build_part_b(const std::string& build_parameter);

    void build_part_c(const std::string& build_parameter);

    Product* get_product();
};

#endif //DESIGN_PATTERNS_BUILDER_H
