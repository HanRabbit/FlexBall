# 板球控制系统设计

## 系统概述
基于机器视觉的板球控制系统，通过OpenMV实时采集小球位置，ESP32-S3主控运行PID算法控制双舵机倾转平台，实现小球位置闭环控制。配套Atom Pocket物联网终端进行远程监控和参数调整。

## 硬件架构
### 核心组件
| 模块 | 型号/规格 | 功能 |
|-------|------------|------|
| 主控 | ESP32-S3 N16R8 | 实时控制核心 |
| 视觉单元 | OpenMV H7 Plus | 200万像素@60fps |
| 执行机构 | S20F 20KG数字舵机×2 | ±60°可调 |
| 平台 | 300×300×3mm亚克力板 | 黑色磨砂表面 |
| 小球 | Ø18mm氧化锆球 | 白色高反光 |

- 万向节中心支撑
- 双舵机差动控制

## 软件架构
### 控制平台(Flex-Ball)
# 开发环境与系统架构

## 开发环境配置
- **开发框架**  
  CLion + PlatformIO

## 硬件平台
| 平台名称 | 核心组件 | 附加模块 |
|----------|----------|----------|
| Flex-Ball 板球控制平台 | OpenMV + ESP32-S3 (N16R8) | - |
| Atom-Pocket 物联网终端 | ESP32S3 (N8R2) | 320*230 TFT_LCD |

## 外部调用库
### Flex-Ball 板球控制平台
| 库名称 | 功能描述 |
|--------|----------|
| FreeRTOS | 实时操作系统 |
| ESPServo | 数字舵机控制 |
| FastLED | WS2812 RGB驱动 |
| ESPNow | ESP32双向通信支持 |

### Atom-Pocket 物联网终端
| 库名称 | 功能描述 |
|--------|----------|
| LVGL | 轻量级嵌入式图形库 |
| ESP32Encoder | 旋转编码器驱动 |
| TFT_eSPI | TFT LCD屏幕驱动 |

## 自建库架构
### Flex-Ball 板球控制平台
| 模块 | 功能 |
|------|------|
| CamSerial | 串口坐标数据包解析 |
| LED | RGB系统状态指示 |
| PIDController | PID算法控制 |
| ServoController | 舵机控制 |
| SysTasks | FreeRTOS任务调度 |

### Atom-Pocket 物联网终端
| 组件	| 功能 |
|------|------|
| Apps	| 应用生命周期管理 |
| HomeApps	| 主界面应用注册 |
| ResourcesPool	| 图形资源集中管理 |
| SideBar	| 可扩展侧边栏 |
| StatusBar	| 实时状态显示栏 |
| PageManager	| 多页面导航控制 |
| UIGroup	| 复合UI控件组 |
| FileManager	| 文件系统操作 |
| Log	| 分级日志输出 |
| MessageManager	| 发布-订阅消息系统 |
| Time	| 网络时间同步 |
| TimerManager	| LVGL定时器集成 |
| WiFi	| 无线连接管理 |
| Battery	| 电池管理系统 |
| Display	| 屏幕驱动与动画 |
| Encoder	| 编码器事件处理 |
| IO_Map	| 引脚分配管理 |
| SD_Card	| 存储扩展支持 |
| System	| 硬件状态监控 |
