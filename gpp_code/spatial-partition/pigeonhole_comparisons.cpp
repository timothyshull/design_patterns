#include <cmath>
#include <vector>
#include <random>
#include <iostream>

const int max_pos = 100;

const int num_units = 200;

const int num_runs = 100;

std::random_device rd;

std::mt19937 gen;

std::uniform_int_distribution<> dis{0, max_pos};

class Unit {
public:
    Unit() = default;

    ~Unit() = default;

    Unit(const Unit&) = default;

    Unit(Unit&&) = default;

    Unit& operator=(const Unit&) = default;

    Unit& operator=(Unit&&) = default;

    explicit Unit(int pos) : _pos{pos} {}

    inline int get_position() { return _pos; }

private:
    const int _pos;
};

std::vector<Unit> make_units(unsigned seed)
{
    std::vector<Unit> units;
    units.reserve(num_units);

    // std::seed_seq seq{seed};
    gen.seed(seed);

    for (int i{0}; i < num_units; ++i) {
        units.push_back(Unit{dis(gen)});
    }

    return units;
}

void slow()
{
    int compares{0};
    int hits{0};

    for (unsigned i{0}; i < num_runs; ++i) {
        std::vector<Unit> units{make_units(i)};

        for (int j{0}; j < units.size() - 1; ++j) {
            for (int b{j + 1}; b < units.size(); ++b) {
                compares++;
                if (units[j].get_position() == units[b].get_position()) {
                    ++hits;
                }
            }
        }
    }

    compares /= num_runs;
    hits /= num_runs;
    std::cout << "slow: " << compares << " compares, " << hits << " hits";
}

void fast()
{
    int compares{0};
    int hits{0};

    for (unsigned i{0}; i < num_runs; ++i) {
        std::vector<Unit> units{make_units(i)};

        std::vector<std::vector<Unit>> slots;
        slots.reserve(max_pos);
        for (auto unit : units) { slots[unit.get_position()].push_back(unit); }

        for (auto slot : slots) {
            for (int j{0}; j < slot.size() - 1; ++j) {
                for (int k{j + 1}; k < slot.size(); ++k) {
                    ++compares;
                    ++hits;
                }
            }
        }
    }

    compares /= num_runs;
    hits /= num_runs;
    std::cout << "fast: " << compares << " compares, " << hits << " hits";
}

int main()
{
    slow();
    fast();
    return 0;
}