def fulltag(tag: str, info: str) -> str:
    return f"<{tag}>{info}</{tag}>"


h1 = fulltag("h1", "function")
p = fulltag("p", "function is taking input process it and return processed data")
div = fulltag(
    "div",
    f"""
{h1}
{p}
""",
)
print(div)
