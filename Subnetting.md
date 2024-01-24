![Workshop Logo](https://cdn.discordapp.com/attachments/1096720092374499338/1196472002207289364/workshop_white.png)

# Subnetting

Subnet mask also known as Netmask demonstrates the bits amount of the IP Address,

f.e - 255.255.255.0, Each 255 indicates 8 bits, and in each 255 number octet all switches are 1, 11111111.11111111.11111111.00000000 can be also met with /24 indicator

This is a Class C IP Address Subnet, Please note that Classless IPs will have Subnets with varying bits amounts (f.e 255.255.240.0)

![](https://cdn.discordapp.com/attachments/1096720092374499338/1199339226873999460/image.png)
![](https://cdn.discordapp.com/attachments/1096720092374499338/1199339596455084123/image.png)

Hosts are how many bits are switched off, in our Class C IP Example there are 8 bits switched off, So it would be 2^8 - 2 (254) (the minus 2 is broadcast and address) This one usually used in small businesses and households.

For advanced subnetting, we will consider all IPs classless. Let's take an example: 192.168.10.1. This is a very typical IP address that we will subnet. Subnetting is the process of dividing a larger IP network into smaller, more manageable sub-networks or subnets or enlarging an already existing IP address to allocate more users without having to get a larger IP address. It allows for better organization of network resources, improved security, and efficient utilization of IP addresses.

