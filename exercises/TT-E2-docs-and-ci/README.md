# TT-E2: Docs and CI

**Timetable slot:** Tools and Techniques **E2** (60 minutes)

This exercise is about producing course materials that are reproducible: documentation that builds, and CI that enforces it.

## Learning objectives

By the end you can:

- Build and serve the course docs locally with MkDocs
- Add a new docs page and wire it into `mkdocs.yml`
- Understand what a “Docs” CI job should validate

## Timebox plan (60 min)

- 0–10: install MkDocs and verify `mkdocs build`
- 10–30: write one new documentation page
- 30–45: add to navigation and verify locally (`mkdocs build`)
- 45–60: push and confirm CI status (or at least that the workflow would pass)

## Success criteria

- `mkdocs build` succeeds locally
- Your new page appears in the nav
- CI “Docs” job is green for your branch/PR

## Local docs workflow

```bash
python3 -m pip install --break-system-packages mkdocs mkdocs-material
mkdocs build
mkdocs serve
```

## Suggested page topics (choose one)
* Troubleshooting: common CMake/sanitizer failures
* "How to read sanitizer reports" (short + examples)
* "How to run benchmarks and interpret results"
