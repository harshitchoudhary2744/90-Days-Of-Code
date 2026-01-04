import matplotlib.pyplot as plt

# Data from previous step
coins = ['BTC', 'ETH', 'SOL', 'ADA']
prices = [45000, 3200, 140, 1.2]

# 1. Creating the Bar Chart
# figsize=(8, 5) means 800x500 pixels (roughly)
plt.figure(figsize=(8, 5)) 

# 2. Plot the data
# color=['...'] gives each bar a custom crypto color
plt.bar(coins, prices, color=['#F7931A', '#627EEA', '#14F195', '#0033AD'])

# 3. Adding Labels 
plt.title('Crypto Asset Prices (USD)')
plt.xlabel('Assets')
plt.ylabel('Price')

# 4. Saving THE IMAGE 
plt.savefig('chart_day10.png')

print("Success! Image saved as 'chart_day10.png'.")

# Final check for Day 10 visualization