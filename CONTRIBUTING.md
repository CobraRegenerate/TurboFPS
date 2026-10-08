# Contributing to TurboFPS

Thank you for your interest in contributing to TurboFPS!

## Ways to Contribute

- **Bug Reports** вЂ” Help us identify and fix issues
- **Feature Requests** вЂ” Suggest new optimizations or game profiles
- **Code Contributions** вЂ” Pull requests for improvements
- **Documentation** вЂ” Improve guides and descriptions
- **Translations** вЂ” Help localize TurboFPS

## Development Setup

### Prerequisites
- Windows 10/11
- Visual Studio 2022 or VS Code with C++ extensions
- CMake 3.20+

### Clone & Build
```bash
git clone https://github.com/CobraRegenerate/TurboFPS.git
cd TurboFPS
mkdir build && cd build
cmake ..
cmake --build . --config Release
```

## Pull Request Process

1. **Fork** the repository
2. **Create** a feature branch: `git checkout -b feature/game-profile-valorant`
3. **Follow** the code style (see below)
4. **Test** your changes thoroughly
5. **Update** CHANGELOG.md with your changes
6. **Open** a Pull Request with clear description

## Code Style

### C++ Guidelines
- Follow C++17 standard
- Use snake_case for functions and variables
- Use PascalCase for classes and structs
- Include comments for non-obvious logic only
- Maximum line length: 120 characters

### Naming Conventions
```cpp
// Functions: snake_case
void optimize_registry();
void clear_memory();
int calculate_fps_boost();

// Classes/Structs: PascalCase
class GameOptimizer;
struct ProcessInfo;
enum OptimizationType;

// Variables: descriptive, snake_case
int frame_rate;
bool is_optimized;
std::string game_name;
```

### Quality Checklist
- [ ] Code compiles without warnings
- [ ] No hardcoded paths or credentials
- [ ] Error handling for all system calls
- [ ] Memory allocated is properly freed
- [ ] Registry changes documented and reversible

## Commit Messages

Format: `type(scope): description`

Examples:
```
feat(profiles): add Valorant optimization profile
fix(memory): correct RAM calculation on 32-bit systems
docs(install): add Windows 11 24H2 instructions
perf(registry): reduce write operations by 40%
```

## Game Profile Format

To add a new game profile, create a JSON file in `profiles/`:
```json
{
  "name": "GameName",
  "executable": "game.exe",
  "optimizations": [
    {"type": "service_disable", "target": "ServiceName"},
    {"type": "registry", "path": "HKLM\\...", "key": "...", "value": 0}
  ],
  "minimum_fps_boost": 10,
  "verified": false
}
```

## Questions?

- Open an Issue for bugs/features
- Join our [issue tracker](https://github.com/CobraRegenerate/TurboFPS/issues)
- Check the [docs/](docs/) folder for more information

---

**Thank you for making TurboFPS better!**