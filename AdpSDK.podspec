Pod::Spec.new do |s|
  s.name         = 'AdpSDK'
  s.version      = '1.2.23'
  s.summary      = 'adpsdk'
  s.homepage     = 'https://ddd.com'
  s.license      = 'MIT'
  s.authors      = {'lee' => '123456@qq.com'}
  s.platform     = :ios, '12.0'
  s.source       = {:git => 'https://github.com/suhc/AdpSDK.git', :tag => s.version}
  
  
  s.dependency 'AnyThinkiOS','6.4.93'
  s.dependency 'GDTMobSDK', '4.15.02'

  
  s.dependency 'ToBid-iOS/TouTiaoAdapter', '4.6.83'
  s.dependency 'ToBid-iOS/BaiduAdapter', '4.6.83'
  s.dependency 'ToBid-iOS/KSAdapter', '4.6.83'
  s.dependency 'ToBid-iOS/CSJMediationAdapter', '4.6.83'
  s.dependency 'ToBid-iOS/OctopusAdapter', '4.6.83'
  s.dependency 'ToBid-iOS/MSAdAdapter', '4.6.83'
  s.dependency 'ToBid-iOS/AdScopeAdapter', '4.6.83'




  # 设置默认只安装Core子模块
  s.default_subspecs = 'Core'
  
  # 核心子模块（必须的基础功能）
  s.subspec 'Core' do |core|
core.vendored_frameworks = [
  'base/AdpSDK.framework',
  'base/AnyThinkGDTAdapter.xcframework',
  'base/AnyThinkGromoreAdapter.xcframework',
  'base/AnyThinkKuaiShouAdapter.xcframework',
  'base/AnyThinkTTAdapter_Mix.xcframework'
]     
    
     # .a 静态库文件
  core.vendored_libraries = [
    'base/libWindMillBidResultPlugin.a',
  ]
    core.frameworks = 'UIKit', 'Foundation'
    core.requires_arc = true
    core.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  end


  

 
end
