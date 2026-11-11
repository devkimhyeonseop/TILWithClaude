# 2026-11-11 필기 CBT 기출 풀이: 오답 163문제 정리

## 배운 것
- ICMP 타입: 0 Echo Reply, 8 Echo Request (사이에 3 Destination Unreachable·4 Source Quench·5 Redirect), 11 Time Exceeded
- ARP = IP → MAC, RARP = MAC → IP. IPv6는 128비트, Hop Limit이 IPv4의 TTL 역할
- 헤더: ACK는 TCP 헤더, Port Number는 4계층(TCP/UDP) 헤더. UDP 헤더는 소스 포트·목적지 포트·길이·체크섬 4개이고 오류 검사는 체크섬
- 포트: FTP 제어 21 + 데이터 20, HTTP 80, SNTP 123, SNMP 161/162, DNS는 UDP 53과 TCP 53 둘 다 사용. HTTP/3은 QUIC(UDP 기반)
- 클래스: A는 최상위 비트 0, B는 10, C는 110, 멀티캐스트는 D(224~239), E는 연구용
- 서브넷: 블록 크기 = 256 − 마스크. /26이면 64씩, /28이면 16씩. 필요한 네트워크 수 이상의 2의 거듭제곱만큼 비트를 빌림(6개 → 8 → 3비트)
- 라우팅: RIP은 홉 15 제한, OSPF는 Link State(Dijkstra), Distance Vector는 RIP·IGRP, EIGRP는 하이브리드, BGP는 경로 벡터. 패킷 전달은 Longest match
- 전송: WDM은 파장 분할(광증폭기로 무중계 장거리), 시간축은 TDM. 흐름제어는 Stop-and-Wait·XON/XOFF·Sliding Window, FEC는 재전송 없는 오류 정정
- 802.3 CSMA/CD, 802.4 Token Bus, 802.5 Token Ring, 802.11 무선(CSMA/CA). Wi-Fi 6 = 802.11ax(OFDMA)
- 클라우드: 서비스 모델 SaaS·PaaS·IaaS, 배포 방식 Public·Private·Hybrid. Fog는 현장 근처 분산 처리
- 보안: VLAN은 논리적 LAN 분리, NAC는 접속 장치 통제, WAF는 웹 전용 방화벽, 방화벽은 자신을 통과하는 트래픽만 통제. 게이트웨이는 1~7계층, Repeater는 충돌 도메인을 못 나눔

## 틀린 것
- 이날 오답 노트에 163문제 기록 (CBT 7세트). 같은 문제를 다시 틀린 것은 WDM(3번), RIP 홉 15, flushdns, 멀티캐스트 D 클래스, VLAN을 IPS로 답함, Distance Vector 등 12개 이상
- 부정형("옳지 않은 것") 문제에서 옳은 보기를 고름
- 짝으로 외울 것을 섞음: ARP/RARP, 서비스 모델/배포 방식, WDM/TDM, 802.11ac/ax, A/CNAME
- 서브넷에서 블록 크기를 못 구해 네트워크·브로드캐스트 주소를 틀림

## 다시 볼 것
- 11/12 근무 중 오답 50문제 퀴즈(틀린 문제만 다시 풀기), 11/13 복습 1일차
- 서브넷 풀이 순서: 마스크 → 블록 크기 → 주소가 들어가는 블록 → 네트워크·브로드캐스트·사용 가능 범위
- "해당하지 않는/옳지 않은" 문제는 "않은"에 먼저 표시하고 읽기

## AI에게 확인한 것
- 그림 문제는 AI가 지문 이미지를 못 봐서 정답과 해설 기준으로 정리함
- 정답 칸이 비어 있던 2문제는 해설 기준으로 정답을 채움
- 이벤트 뷰어 수준(2023.11 39번)은 해설마다 항목이 달라 시험 전에 따로 확인하기로 함
- 서브넷 예제(/26 → .190, /28 → .64)는 직접 계산해서 확인
