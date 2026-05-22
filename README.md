# Cảm biến dò đường MKE-S16 I2C 5C LINE TRACKING SENSOR

## Giới thiệu

MKE-S16 I2C Line Follower Sensor là cảm biến dò đường sử dụng 5 mắt cảm biến hồng ngoại CNY70 chất lượng cao, có khả năng chống nhiễu ánh sáng môi trường vượt trội và cho độ ổn định cao trong quá trình hoạt động. Cảm biến hoạt động dựa trên nguyên lý phản xạ tia hồng ngoại theo độ tương phản màu sắc của bề mặt vật thể, thường được sử dụng để phân biệt giữa hai màu có độ tương phản cao như trắng và đen trong các ứng dụng dò line.

Module được ứng dụng rộng rãi trong các mô hình xe dò đường, robot tự hành, robot thi đấu STEM, AGV mini, robot vận chuyển thông minh và nhiều hệ thống điều hướng tự động khác. Với thiết kế sử dụng 5 mắt cảm biến độc lập, MKE-S16 cho khả năng nhận diện line chính xác hơn, hỗ trợ robot xử lý các đoạn cua, ngã rẽ và giao lộ một cách hiệu quả.

Cảm biến được tích hợp vi điều khiển MCU thông minh với tính năng tự động cân chỉnh (Auto Calibrate) giúp đơn giản hóa quá trình sử dụng và tăng độ chính xác khi hoạt động trên nhiều loại mặt nền khác nhau. MCU đồng thời chuyển đổi tín hiệu từ các mắt cảm biến sang chuẩn giao tiếp I²C, giúp việc kết nối trở nên đơn giản chỉ với hai dây tín hiệu SDA và SCL. Ngoài ra, cảm biến còn hỗ trợ xuất tín hiệu Digital độc lập tương ứng với từng mắt cảm biến, phù hợp cho nhiều phương pháp lập trình và xử lý khác nhau.

Sản phẩm đặc biệt phù hợp cho các mô hình robot, dự án STEM, đồ án học tập và thực hành điện – điện tử, giúp người học dễ dàng tiếp cận nguyên lý cảm biến hồng ngoại, kỹ thuật dò line, giao tiếp I2C và xử lý tín hiệu số trong các hệ thống robot thực tế. Đây là công cụ lý tưởng cho học sinh, sinh viên, giáo viên giảng dạy STEM và những người yêu thích nghiên cứu sáng tạo robot.

MKE-S16 hỗ trợ điện áp giao tiếp 3.3VDC và 5VDC, cho phép kết nối trực tiếp và an toàn với Arduino, Raspberry Pi, NVIDIA Jetson, Micro:bit và nhiều nền tảng điều khiển khác. Sản phẩm đi kèm cáp kết nối 4P XH2.54 – Dupont, đảm bảo kết nối chắc chắn, ổn định và thuận tiện trong quá trình lắp đặt và sử dụng.

## Thông số kỹ thuật
- Điện áp hoạt động: 5VDC
- Dòng điện tiêu thụ khi hoạt động: khoảng 200mA
- Chuẩn giao tiếp:
  - I2C
  - Digital Output
- Điện áp giao tiếp: TTL 3.3VDC / 5VDC
- Cảm biến sử dụng:
  - 5 mắt cảm biến hồng ngoại CNY70
- Tính năng:
  - Tự động căn chỉnh (Auto Calibrate)
  - Hỗ trợ nhiều địa chỉ I2C
  - Xuất tín hiệu Digital độc lập cho từng mắt cảm biến
- Khả năng tương thích:
  - Arduino
  - Raspberry Pi
  - NVIDIA Jetson
  - Micro:bit
  - Và các board điều khiển 3.3VDC / 5VDC khác
- Thiết kế mạch:
  - Hoạt động ổn định, chống nhiễu tốt
  - Chống nhiễu ánh sáng môi trường hiệu quả
  - Phù hợp cho ứng dụng học tập và thực tế
- Chuẩn kết nối: XH2.54 4P
- Đi kèm cáp kết nối: 4P XH2.54 – Dupont

## Các chân tín hiệu

| Chân | Chức năng |
|------|------------|
| GND  | Nguồn âm 0VDC |
| 5V  | Nguồn dương 5VDC |
| SDA  | Chân I2C Data |
| SCL  | Chân I2C Clock |
| P1  | Sensor 1 Digital Signal (High/Low) |
| P2  | Sensor 2 Digital Signal (High/Low) |
| P3  | Sensor 3 Digital Signal (High/Low) |
| P4  | Sensor 4 Digital Signal (High/Low) |
| P5  | Sensor 5 Digital Signal (High/Low) |

## Hướng dẫn cấu hình

### Cấu hình và kiểm tra địa chỉ I2C
- Nhấn 1 lần (click) trên button S1. Lúc này, từ LED1 đến LED5 sẽ nhấp nháy 3 lần, mỗi lần 1s (sáng 500ms, tối 500ms). Tùy thuộc vào số lượng sẽ tương ứng với từng địa chỉ.
- Nhấn 2 lần (double-click) trên button S1 sẽ vào chế độ chọn địa chỉ I2C. Lúc này LED1 đến LED5 sẽ nhấp nháy. Địa chỉ I2C phụ thuộc vào số LED đang nhấp nháy. Có thể nhấn 2 lần (double-click) để chuyển đổi giữa các địa chỉ từ 0x2A đến 0x2F.
![MKE-S16 I2C_5C_LineTracking](/extras/MKE-S16_0.png)

Sau khi chọn địa chỉ, nhấn giữ button S1 (long-click) để lưu lại địa chỉ I2C đã chọn. Lúc này 5 LED sẽ nhấp nháy liên tục 5 lần, mỗi lần 200ms rồi tắt.

### Canh chỉnh ngưỡng (calibrate)
- Khoảng cách lý tưởng của cảm biến với mặt đất là từ 0.5cm - 1cm
- Khi canh chỉnh thì phải để cảm biến tiếp xúc với màu **tối hơn**

Đặt cảm biến vào vùng có màu tối hơn, nhấn giữ (long-click) button S1 để cảm biến tính toán độ nhạy (ngưỡng nhận). Các LED từ 1 đến 5 sẽ chớp 10 lần, mỗi lần 200ms.

## Hướng dẫn sử dụng

### Hướng dẫn kết nối
- Cấp nguồn 5VDC cho mạch qua hai chân GND và 5V.
- Kết nối chân SCL của Sensor với chân I2C Clock của mạch điều khiển.
- Kết nối chân SDA của Sensor với chân I2C Data của mạch điều khiển.

### Hướng dẫn sử dụng với Arduino Uno / Vietduino Uno / ESP32
- Trong **Tools / Library Manager**, tìm và cài đặt bộ thư viện tổng hợp **"MKE_ONE" by MakerEdu.vn**
- Mở chương trình mẫu tại **File / Examples / MKE_ONE / Sensor / MKE_S16_I2C_5C_LineTracking**
- Cấu hình board mạch tương ứng là **Arduino Uno / ESP32**, chọn đúng cổng **COM Port** của mạch và nhấn **Upload** để nạp chương trình.
- Cấp nguồn 5VDC cho mạch, kết nối chân SDA và SCL của Sensor với chân điều khiển được khai báo trong chương trình.
- Xem kết quả mạch hoạt động theo chương trình đã nạp.

### Hướng dẫn lập trình với Micro:bit (kéo thả khối)

- Khởi động [Microsoft MakeCode](https://makecode.microbit.org/) và **Import** chương trình theo đường link sau: `https://github.com/makereduvn/mke_s16_i2c_5c_linetracking_microbit/`
- Kết nối mạch Micro:bit và **Download** chương trình.
- Cấp nguồn 5VDC cho mạch, kết nối chân SDA và SCL của Sensor với chân điều khiển được khai báo trong chương trình.
- Xem kết quả mạch hoạt động theo chương trình đã nạp.

Nếu bắt đầu tự án mới cần cài đặt Extension **MKE_ONE_MICROBIT** trên [Microsoft MakeCode](https://makecode.microbit.org/) theo [hướng dẫn tại đây](https://github.com/makereduvn/MKE_ONE_MICROBIT). Sau khi cài đặt thành công, các khối lệnh của Extension **MKE_ONE_MICROBIT** sẽ xuất hiện trong danh sách block và sẵn sàng để sử dụng.

## Kích thước sản phẩm
![MKE-S16 I2C_5C_LineTracking](/extras/MKE-S16_1.jpg)

## Hình ảnh sản phẩm
![MKE-S16 I2C_5C_LineTracking](/extras/MKE-S16_2.png)
![MKE-S16 I2C_5C_LineTracking](/extras/MKE-S16_3.png)

## Miễn trừ trách nhiệm:
Sản phẩm này là bo mạch phát triển được thiết kế phục vụ cho mục đích nghiên cứu, thử nghiệm và học tập, không phải là một thiết bị hoàn chỉnh. Trong trường hợp người dùng kết hợp mạch này với các linh kiện, thiết bị hoặc phần mềm khác để tạo thành một hệ thống hoặc sản phẩm hoàn chỉnh, mọi chức năng và tính phù hợp của sản phẩm sau cùng đều thuộc trách nhiệm của người dùng.
