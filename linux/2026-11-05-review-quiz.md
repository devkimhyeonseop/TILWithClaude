# 2026-11-05 복습: 약점 6줄·리눅스 파일/명령

## 배운 것
- df(디스크 사용량, disk free), du(폴더·파일 크기, disk usage)
- PTR 레코드에는 IP 끝자리만 입력 (A: 이름→IP, PTR: IP→이름)
- /etc/fstab(마운트 목록), /etc/passwd(계정), /etc/shadow(암호화된 비밀번호)
- systemctl start 서비스명(지금 켜기), systemctl enable 서비스명(부팅 때 자동 시작)
- 공유 권한과 NTFS 권한이 다르면 더 제한적인 쪽 적용, 거부가 허용보다 우선

## 틀린 것
- df를 묻는데 fstab이라고 답함 (fstab은 명령어가 아니라 파일)
- PTR 값을 "a"로 답함 (끝자리만 입력)
- /etc/fstab을 /mount로, 계정 파일을 /user·/secret으로 답함
- systemctl만 쓰고 동작과 서비스명을 빼먹음

## 다시 볼 것
- 설정 파일은 /etc 아래: passwd, shadow, fstab, resolv.conf
- systemctl 명령은 start와 enable이 별개

## AI에게 확인한 것
- 같은 문제를 다시 풀어 4문제 모두 맞는 것으로 확인함 (서비스명은 문제에서 httpd를 줘야 완성)
