### Smart Vehicle Engineering Graduation Project
- HMI team leader
- $ roslaunch home home.launch

## UI
### 1. home
- 기능: 로봇의 현재 위치에서 가고자 하는 층 및 호수 입력
- Flow: 배달 기사님이 배달할 음식 또는 물품을 특정 층/호로 클릭 -> 입력한 주소가 맞는지 확인 후 CHECK 버튼 클릭 (-> 기사님 복귀)
- 다음 화면: moving

### 2. qt_map_rviz_ros (moving)
- 기능: Rviz를 통해 로봇의 실시간 위치 및 주행 경로를 알 수 있음
- Flow: 로봇이 실시간 위치 및 경로 인식/생성하며 이동함. 그 동안 로봇을 주시하는 보행자는 Rviz 화면을 통해 예상 주행 경로를 알 수 있음
- 다음 화면: take

### 3. take
- 기능: 수령 후, 중앙 버튼 클릭 시 로봇을 첫 출발 위치로 복귀하도록 트리거 역할 
- Flow: 도착 시 로봇은 측위 파트로부터 목표 지점에 도달했음을 알 수 있고, 곧바로 해당 UI를 띄움. 수령자가 중앙 버튼을 클릭하면 로봇은 곧바로 출발 위치로 복귀함.
- 수령자는 버튼을 클릭하기 전에, 미리 물건을 받아야 한다. 첫 위치 복귀 후, 다음 사용자를 위해 첫 화면(home)으로 바로 연결됨.
- 다음 화면: moving

---

<p align="center">
  <img src="https://github.com/ohmywans/SVE_graduation_project/assets/104372864/06262431-d127-46f4-a90b-f688a5152f0e">
</p>

<p align="center">
  <img src="https://github.com/ohmywans/SVE_graduation_project/assets/104372864/877235b7-25b6-44f3-87e3-bdf01f4876d7">
</p>

<p align="center">
  <img src="https://github.com/ohmywans/SVE_graduation_project/assets/104372864/ed9e630a-63b7-4f41-8311-46774692d289">
</p>

---
## rqt_graph

<p align="center">
  <img src="https://github.com/ohmywans/SVE_graduation_project/assets/104372864/fa35c032-0799-45a0-8f98-b1ea1d5b6b33">
</p>
