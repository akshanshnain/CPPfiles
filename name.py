#id: 709809397936685154
#token: _92fD4E5M24r61W3B2YyvHJXG7dj48Va
#invite link : https://discord.com/api/oauth2/authorize?client_id=709809397936685154&permissions=8&scope=bot

import discord

print(discord.__version__)

token ='_92fD4E5M24r61W3B2YyvHJXG7dj48Va'

client = discord.Client()


@client.event
async def on_ready():
    print(f'We have logged in as {client.user}')


@client.event
async def on_message(message):
    print(f"{message.channel}: {message.author}: {message.author.name}: {message.content}")


client.run(token)