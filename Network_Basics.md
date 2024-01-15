![Workshop Logo](https://cdn.discordapp.com/attachments/1096720092374499338/1196472002207289364/workshop_white.png)

# IP Address
## Overview of IP Address

---

**IP (Internet Protocol)**  
IPv4 and IPv6

We communicate on Layer 3, where IPs are utilized, while Layer 2 is dedicated to MAC addresses.

To view IP addresses on your computer, use the following commands:
- Linux: `ifconfig`
- Windows: `ipconfig`

---

**IPv4 and IPv6 Details**

IPv4 consists of 32 bits (8+8+8+8), providing a maximum of 2^32 (4,294,967,296) possible IP addresses.  
IPv6, with 128 bits, offers a vast number of IPs—2^128 (3.4028237e+38).

---

**Network Address Translation (NAT) and Private IP Addresses**

Our devices employ NAT (Network Address Translation), assigning private address spaces. IP addresses starting with **192.168** are reserved for internal use and are not publicly known.

Private IP Address Classes:
- Class A
- Class B
- Class C
- Class D (Unused)
- Class E (Unused)

![Private IP Address Classes](https://networkinghelper.weebly.com/uploads/1/6/0/2/16023158/7639480.png?1356548147)

---

# MAC Addresses

![MAC Address Example](https://static.tutorialandexample.com/computer-fundamentals/what-is-a-mac-address1.png)

**MAC (Media Access Control) Addresses**

MAC is a 48-bit physical identifier used for communication, especially in conjunction with switches. The format is **MM:MM:MM:SS:SS:SS**.

Identifiers in MAC Addresses, such as the first 3, can be used for MAC Lookup. For instance, 00:0c:29 is the identifier for VMWare (Virtual Machine).

When identifying a device, MAC addresses are crucial, as IPs may not be sufficient.

---

# TCP and UDP
## Transmission Control Protocol & User Datagram Protocol

---

**TCP and UDP Characteristics**

- TCP is suitable for high reliability, being connection-oriented.
- UDP is ideal for applications like streaming or voice-over-IP.

TCP operates through a "3 Way Handshake":
1. Send a "SYN" packet
2. Receive "SYN ACK" packet
3. Send an "ACK" packet

TCP and UDP require only one port for duplex, bidirectional traffic. Port numbers correspond to the services of the respective TCP or UDP implementation.

![3 Way Handshake](https://cdn.discordapp.com/attachments/830857312280379442/1196481411494969504/IMG_6194.png)

_An example of a 3-way handshake when opening www.google.com, observed in Wireshark:_

![Wireshark Images](https://cdn.discordapp.com/attachments/1125128279922311178/1196481972789313648/image.png)
![Wireshark Images](https://cdn.discordapp.com/attachments/1125128279922311178/1196482142293721230/image.png)
![Wireshark Images](https://cdn.discordapp.com/attachments/1125128279922311178/1196482282513518702/image.png)

---

**Common Ports explained**

**TCP Ports:**
- FTP (21): File Transfer Protocol for logging into servers and file transfer.
- Telnet (23): Remote machine connection (less secure than SSH).
- DNS (53): Resolving IP addresses into names for simplified communication.
- HTTP (80) / HTTPS (443): Non-secure and encrypted versions for website access.
- SMB (139 + 445): Common ports related to file shares.

**UDP Ports:**
- DHCP (67,68): Associates with IP addresses randomly.
- TFTP (69): Trivial FTP utilizing UDP instead of TCP.
- SNMP (161): Encountered occasionally.

