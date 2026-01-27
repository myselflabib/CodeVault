# Variable type hint
age: int = 25

print(age.__sizeof__())


# Function type hints
def greeting(name: str) -> str:
    return f"Hello, {name}!"
# Usage


print(greeting("Alice")) 
# Output: Hello, Alice!