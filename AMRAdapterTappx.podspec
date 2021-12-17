Pod::Spec.new do |s|
  s.name             = 'AMRAdapterTappx'
  s.version          = '4.0.9.1'
  s.license          = { :type => 'Copyright', :text => <<-LICENSE
														Copyright 2016
														Admost Mediation Limited. 
														LICENSE
														}
  s.homepage         = 'http://www.admost.com/'
  s.author           = { 'Admost Mediation Limited' => 'amr@admost.com' }
  s.summary          = 'Tappx adapter for AMR SDK.'
  s.description      = 'AMR Tappx adapter allows publishers to mediate Tappx banner and interstitial ads in AMR SDK.'

  s.source           = { :git => 'https://github.com/admost/AMR-IOS-ADAPTER-TAPPX.git',
 								 :tag => s.version.to_s
 								}
  s.documentation_url = 'https://admost.github.io/amrios/'
  s.platform 			= :ios
  s.ios.deployment_target = '9.0'
  s.vendored_libraries = 'AMRAdapterTappx/Libs/libAMRAdapterTappx.a'
  s.vendored_frameworks = "AMRAdapterTappx/Frameworks/TappxFramework.framework","AMRAdapterTappx/Frameworks/OMSDK_Tappx.xcframework"
  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'armv7 arm64 x86_64' }
  s.dependency 'AMRSDK', '~> 1.5.0'
end
