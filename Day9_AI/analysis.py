import pandas as pd

# 1. Setup Data
data = {
    'Coin': ['Bitcoin', 'Ethereum', 'Solana', 'Doge', 'Cardano'],
    'Price': [45000, 3200, 140, 0.12, 1.20],
    'MarketCap_B': [850, 350, 60, 15, 40]
}

# 2. Creating DataFrame
df = pd.DataFrame(data)
print("--- MARKET DATA ---")
print(df)

# 3. Filter: Find High Value Coins (> $100)
print("\n--- BLUE CHIP COINS (> $100) ---")
print(df[df['Price'] > 100])

# 4. Adding Risk Column
df['Risk'] = ['Low', 'Low', 'Med', 'High', 'Med']
print("\n--- UPDATED WITH RISK ---")
print(df)