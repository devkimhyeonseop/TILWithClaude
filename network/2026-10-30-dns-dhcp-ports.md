# 2026-10-30 DNS·DHCP·응용 프로토콜 포트

## 배운 것
- DNS 포트 53, 레코드 A(도메인→IPv4), AAAA(IPv6), CNAME(별칭), MX(메일), NS, PTR(IP→도메인)
- DHCP는 DORA (Discover, Offer, Request, Ack), 서버 UDP 67, 클라이언트 UDP 68
- 메일 SMTP 25(보내기), POP3 110·IMAP 143(받기)
- FTP 제어 21, 데이터 20 / SSH 22 / Telnet 23 / HTTP 80 / HTTPS 443
- TCP 연결 설정 SYN → SYN+ACK → ACK, ARP는 IP로 MAC을 알아냄

## 틀린 것
- 도메인→IP 레코드를 ARP로 답함 → **A** 레코드
- 메일 수신을 SMTP·FTP로 답함 → **POP3, IMAP**
- DHCP 포트를 못 외움 → **67, 68**
- FTP 데이터 포트를 20·21로 답함 → 데이터는 **20**
- TCP 3단계 이름을 모름 → **SYN → SYN+ACK → ACK**

## 다시 볼 것
- A, POP3·IMAP, 67/68, FTP 20/21, TCP 3단계 (내일 아침 첫 복습)

## AI에게 확인한 것
- 포트는 비슷한 말이 섞이기 쉬워서 6줄 요약으로 묶어 반복하기로 함
