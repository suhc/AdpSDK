Pod::Spec.new do |s|
  s.name         = 'AdpSDK'
  s.version      = '1.2.0'
  s.summary      = 'adpsdk'
  s.homepage     = 'https://ddd.com'
  s.license      = 'MIT'
  s.authors      = {'lee' => '123456@qq.com'}
  s.platform     = :ios, '12.0'
  s.source       = {:git => 'https://github.com/suhc/AdpSDK.git', :tag => s.version}
  
  
  s.dependency 'AnyThinkiOS','6.3.68'
  s.dependency 'AnyThinkGDTSDKAdapter','6.3.68'

  
  s.dependency 'ToBid-iOS/TouTiaoAdapter', '4.5.10'
  s.dependency 'ToBid-iOS/BaiduAdapter', '4.5.10'
  s.dependency 'ToBid-iOS/KSAdapter', '4.5.10'
  s.dependency 'ToBid-iOS/CSJMediationAdapter', '4.5.10'



  # 设置默认只安装Core子模块
  s.default_subspecs = 'Core'
  
  # 核心子模块（必须的基础功能）
  s.subspec 'Core' do |core|
    core.vendored_frameworks = [
      'base/AdpSDK.framework',
      'base/WindFoundation.xcframework',
      'base/WindMillSDK.xcframework',
      'base/WindSDK.xcframework',
      'core/AnyThinkBaiduAdapter.xcframework',
      'core/AnyThinkGromoreAdapter.xcframework',
      'core/AnyThinkKuaiShouAdapter.xcframework',
      'core/AnyThinkTTAdapter_Mix.xcframework',
    ]
     # .a 静态库文件
  core.vendored_libraries = [
    'base/libWindMillBidResultPlugin.a',
  ]
    core.frameworks = 'UIKit', 'Foundation'
    core.requires_arc = true
    core.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  end


  

  # ks（可选）
  s.subspec 'KSAdapter' do |ks|
    ks.vendored_frameworks = 'core/AnyThinkKuaiShouAdapter.xcframework'
    ks.vendored_libraries = 'core/libWindMillKSAdapter.a'
    ks.dependency 'AdpSDK/Core'
  end
  
    # gromore（可选）
  s.subspec 'GromoreAdapter' do |gromore|
    gromore.vendored_frameworks = 'core/AnyThinkGromoreAdapter.xcframework'
    gromore.vendored_libraries = 'core/libWindMillGroMoreAdapter.a'
    gromore.dependency 'AdpSDK/Core'
  end
  
      # baidu（可选）
  s.subspec 'BaiduAdapter' do |baidu|
    baidu.vendored_frameworks = 'core/AnyThinkBaiduAdapter.xcframework'
    baidu.vendored_libraries = 'core/libWindMillBaiduAdAdapter.a'
    baidu.dependency 'AdpSDK/Core'
  end
  
        # tt（可选）
  s.subspec 'TTAdapter' do |tt|
    tt.vendored_frameworks = 'core/AnyThinkTTAdapter_Mix.xcframework'
    tt.vendored_libraries = 'core/libWindMillTTAdAdapter.a'
    tt.dependency 'AdpSDK/Core'
  end

 
end
