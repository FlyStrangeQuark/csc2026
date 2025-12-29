#include <benchmark/benchmark.h>

#include "Particle.hpp"
#include <vector>

static void BM_PtCalculationBatch(benchmark::State& state) {
    std::vector<csc2026::Particle> particles(static_cast<size_t>(state.range(0)));
    for (size_t i = 0; i < particles.size(); ++i) {
        particles[i] = csc2026::Particle(0.1 * i, 0.2 * i, 0.3 * i, 0.511);
    }

    std::vector<double> results(particles.size());

    for (auto _ : state) {
        for (size_t i = 0; i < particles.size(); ++i) {
            results[i] = particles[i].pt();
        }
        benchmark::DoNotOptimize(results);
    }
}

BENCHMARK(BM_PtCalculationBatch)->Arg(1000)->Arg(10000)->Arg(100000);

BENCHMARK_MAIN();
