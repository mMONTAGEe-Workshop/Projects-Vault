![Workshop Logo](https://cdn.discordapp.com/attachments/1096720092374499338/1196472002207289364/workshop_white.png)

# Subnetting

Subnet mask also known as Netmask demonstrates the bits amount of the IP Address,

f.e - 255.255.255.0, Each 255 indicates 8 bits, and in each 255 number octet all switches are 1, 11111111.11111111.11111111.00000000 can be also met with /24 indicator

This is a Class C IP Address Subnet, Please note that Classless IPs will have Subnets with varying bits amounts (f.e 255.255.240.0)

![](https://cdn.discordapp.com/attachments/1096720092374499338/1199339226873999460/image.png)
![](https://cdn.discordapp.com/attachments/1096720092374499338/1199339596455084123/image.png)

Hosts are how many bits are switched off, in our Class C IP Example there are 8 bits switched off, So it would be 2^8 - 2 (254) (the minus 2 is broadcast and address) This one usually used in small businesses and households.

For advanced subnetting, we will consider all IPs classless. Let's take an example: 192.168.10.1. This is a very typical IP address that we will subnet. Subnetting is the process of dividing a larger IP network into smaller, more manageable sub-networks or subnets or enlarging an already existing IP address to allocate more users without having to get a larger IP address. It allows for better organization of network resources, improved security, and efficient utilization of IP addresses.

Let's say we want to subnet the network 192.168.10.0/24 into multiple subnets. We can adjust the subnet mask to allocate a specific range of IP addresses to each subnet. For instance, if we want to create four subnets, we would need to borrow additional bits for subnetting. Let's borrow two bits:

Original IP: 192.168.10.1 

Original Subnet Mask: 255.255.255.0 (in binary: 11111111.11111111.11111111.00000000)

Custom Subnet Mask for four subnets (borrowing 2 bits): 255.255.255.192 (in binary: 11111111.11111111.11111111.11000000)

Now, we have created four subnets. Each subnet will have a block size of 64 addresses (2^6 = 64), but we lose two addresses per subnet for network and broadcast addresses. Therefore, each subnet will have 62 usable addresses.

Subnet 1:

    Network Address: 192.168.10.0
    Usable Range: 192.168.10.1 to 192.168.10.62
    Broadcast Address: 192.168.10.63

Subnet 2:

    Network Address: 192.168.10.64
    Usable Range: 192.168.10.65 to 192.168.10.126
    Broadcast Address: 192.168.10.127

Subnet 3:

    Network Address: 192.168.10.128
    Usable Range: 192.168.10.129 to 192.168.10.190
    Broadcast Address: 192.168.10.191

Subnet 4:

    Network Address: 192.168.10.192
    Usable Range: 192.168.10.193 to 192.168.10.254
    Broadcast Address: 192.168.10.255

