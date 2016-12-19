#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

namespace proposal {

class proposal {

private:
  std::size_t N_org;
  std::size_t X_size;
  std::size_t Y_size;
  std::size_t K_size;

  std::vector<double> A;
  std::vector<double> B;
  bool transposed;

  uint64_t block_result;
  uint64_t block_input;
  uint64_t repetitions;
  uint64_t verbose;

  void verify_blocking_setup();

public:
  proposal(size_t N, std::vector<double> &A, std::vector<double> &B,
           bool transposed, uint64_t block_result, uint64_t block_input,
           uint64_t repetitions, uint64_t verbose);

  std::vector<double> matrix_multiply(double &duration);
};
}
