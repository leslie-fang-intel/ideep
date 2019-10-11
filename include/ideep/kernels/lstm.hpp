#ifndef IDEEP_KERNELS_LSTM_HPP
#define IDEEP_KERNELS_LSTM_HPP

#include "common.hpp"

namespace ideep {

struct lstm_forward : public dnnl::lstm_forward {
  static void compute() {
  }
};

struct lstm_backward : public dnnl::lstm_backward {
  static void compute() {
  }
};

}  // namespace ideep

#endif