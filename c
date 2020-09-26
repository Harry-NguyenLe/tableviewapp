[33mcommit f2e13413a7acac22549a82e0ee4e14328f26e384[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: hai <hai.nguyen7792@gmail.com>
Date:   Sat Sep 26 21:17:36 2020 +0700

    first commit

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..603b140[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,14 @@[m
[32m+[m[32m*.iml[m
[32m+[m[32m.gradle[m
[32m+[m[32m/local.properties[m
[32m+[m[32m/.idea/caches[m
[32m+[m[32m/.idea/libraries[m
[32m+[m[32m/.idea/modules.xml[m
[32m+[m[32m/.idea/workspace.xml[m
[32m+[m[32m/.idea/navEditor.xml[m
[32m+[m[32m/.idea/assetWizardSettings.xml[m
[32m+[m[32m.DS_Store[m
[32m+[m[32m/build[m
[32m+[m[32m/captures[m
[32m+[m[32m.externalNativeBuild[m
[32m+[m[32m.cxx[m
[1mdiff --git a/.idea/codeStyles/Project.xml b/.idea/codeStyles/Project.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..0d15693[m
[1m--- /dev/null[m
[1m+++ b/.idea/codeStyles/Project.xml[m
[36m@@ -0,0 +1,134 @@[m
[32m+[m[32m<component name="ProjectCodeStyleConfiguration">[m
[32m+[m[32m  <code_scheme name="Project" version="173">[m
[32m+[m[32m    <JetCodeStyleSettings>[m
[32m+[m[32m      <option name="PACKAGES_TO_USE_STAR_IMPORTS">[m
[32m+[m[32m        <value>[m
[32m+[m[32m          <package name="java.util" alias="false" withSubpackages="false" />[m
[32m+[m[32m          <package name="kotlinx.android.synthetic" alias="false" withSubpackages="true" />[m
[32m+[m[32m          <package name="io.ktor" alias="false" withSubpackages="true" />[m
[32m+[m[32m        </value>[m
[32m+[m[32m      </option>[m
[32m+[m[32m      <option name="PACKAGES_IMPORT_LAYOUT">[m
[32m+[m[32m        <value>[m
[32m+[m[32m          <package name="" alias="false" withSubpackages="true" />[m
[32m+[m[32m          <package name="java" alias="false" withSubpackages="true" />[m
[32m+[m[32m          <package name="javax" alias="false" withSubpackages="true" />[m
[32m+[m[32m          <package name="kotlin" alias="false" withSubpackages="true" />[m
[32m+[m[32m          <package name="" alias="true" withSubpackages="true" />[m
[32m+[m[32m        </value>[m
[32m+[m[32m      </option>[m
[32m+[m[32m    </JetCodeStyleSettings>[m
[32m+[m[32m    <codeStyleSettings language="XML">[m
[32m+[m[32m      <indentOptions>[m
[32m+[m[32m        <option name="CONTINUATION_INDENT_SIZE" value="4" />[m
[32m+[m[32m      </indentOptions>[m
[32m+[m[32m      <arrangement>[m
[32m+[m[32m        <rules>[m
[32m+[m[32m          <section>[m
[32m+[m[32m            <rule>[m
[32m+[m[32m              <match>[m
[32m+[m[32m                <AND>[m
[32m+[m[32m                  <NAME>xmlns:android</NAME>[m
[32m+[m[32m                  <XML_ATTRIBUTE />[m
[32m+[m[32m                  <XML_NAMESPACE>^$</XML_NAMESPACE>[m
[32m+[m[32m                </AND>[m
[32m+[m[32m              </match>[m
[32m+[m[32m            </rule>[m
[32m+[m[32m          </section>[m
[32m+[m[32m          <section>[m
[32m+[m[32m            <rule>[m
[32m+[m[32m              <match>[m
[32m+[m[32m                <AND>[m
[32m+[m[32m                  <NAME>xmlns:.*</NAME>[m
[32m+[m[32m                  <XML_ATTRIBUTE />[m
[32m+[m[32m                  <XML_NAMESPACE>^$</XML_NAMESPACE>[m
[32m+[m[32m                </AND>[m
[32m+[m[32m              </match>[m
[32m+[m[32m              <order>BY_NAME</order>[m
[32m+[m[32m            </rule>[m
[32m+[m[32m          </section>[m
[32m+[m[32m          <section>[m
[32m+[m[32m            <rule>[m
[32m+[m[32m              <match>[m
[32m+[m[32m                <AND>[m
[32m+[m[32m                  <NAME>.*:id</NAME>[m
[32m+[m[32m                  <XML_ATTRIBUTE />[m
[32m+[m[32m                  <XML_NAMESPACE>http://schemas.android.com/apk/res/android</XML_NAMESPACE>[m
[32m+[m[32m                </AND>[m
[32m+[m[32m              </match>[m
[32m+[m[32m            </rule>[m
[32m+[m[32m          </section>[m
[32m+[m[32m          <section>[m
[32m+[m[32m            <rule>[m
[32m+[m[32m              <match>[m
[32m+[m[32m                <AND>[m
[32m+[m[32m                  <NAME>.*:name</NAME>[m
[32m+[m[32m                  <XML_ATTRIBUTE />[m
[32m+[m[32m                  <XML_NAMESPACE>http://schemas.android.com/apk/res/android</XML_NAMESPACE>[m
[32m+[m[32m                </AND>[m
[32m+[m[32m              </match>[m
[32m+[m[32m            </rule>[m
[32m+[m[32m          </section>[m
[32m+[m[32m          <section>[m
[32m+[m[32m            <rule>[m
[32m+[m[32m              <match>[m
[32m+[m[32m                <AND>[m
[32m+[m[32m                  <NAME>name</NAME>[m
[32m+[m[32m                  <XML_ATTRIBUTE />[m
[32m+[m[32m                  <XML_NAMESPACE>^$</XML_NAMESPACE>[m
[32m+[m[32m                </AND>[m
[32m+[m[32m              </match>[m
[32m+[m[32m            </rule>[m
[32m+[m[32m          </section>[m
[32m+[m[32m          <section>[m
[32m+[m[32m            <rule>[m
[32m+[m[32m              <match>[m
[32m+[m[32m                <AND>[m
[32m+[m[32m                  <NAME>style</NAME>[m
[32m+[m[32m                  <XML_ATTRIBUTE />[m
[32m+[m[32m                  <XML_NAMESPACE>^$</XML_NAMESPACE>[m
[32m+[m[32m                </AND>[m
[32m+[m[32m              </match>[m
[32m+[m[32m            </rule>[m
[32m+[m[32m          </section>[m
[32m+[m[32m          <section>[m
[32m+[m[32m            <rule>[m
[32m+[m[32m              <match>[m
[32m+[m[32m                <AND>[m
[32m+[m[32m                  <NAME>.*</NAME>[m
[32m+[m[32m                  <XML_ATTRIBUTE />[m
[32m+[m[32m                  <XML_NAMESPACE>^$</XML_NAMESPACE>[m
[32m+[m[32m                </AND>[m
[32m+[m[32m              </match>[m
[32m+[m[32m              <order>BY_NAME</order>[m
[32m+[m[32m            </rule>[m
[32m+[m[32m          </section>[m
[32m+[m[32m          <section>[m
[32m+[m[32m            <rule>[m
[32m+[m[32m              <match>[m
[32m+[m[32m                <AND>[m
[32m+[m[32m                  <NAME>.*</NAME>[m
[32m+[m[32m                  <XML_ATTRIBUTE />[m
[32m+[m[32m                  <XML_NAMESPACE>http://schemas.android.com/apk/res/android</XML_NAMESPACE>[m
[32m+[m[32m                </AND>[m
[32m+[m[32m              </match>[m
[32m+[m[32m              <order>ANDROID_ATTRIBUTE_ORDER</order>[m
[32m+[m[32m            </rule>[m
[32m+[m[32m          </section>[m
[32m+[m[32m          <section>[m
[32m+[m[32m            <rule>[m
[32m+[m[32m              <match>[m
[32m+[m[32m                <AND>[m
[32m+[m[32m                  <NAME>.*</NAME>[m
[32m+[m[32m                  <XML_ATTRIBUTE />[m
[32m+[m[32m                  <XML_NAMESPACE>.*</XML_NAMESPACE>[m
[32m+[m[32m                </AND>[m
[32m+[m[32m              </match>[m
[32m+[m[32m              <order>BY_NAME</order>[m
[32m+[m[32m            </rule>[m
[32m+[m[32m          </section>[m
[32m+[m[32m        </rules>[m
[32m+[m[32m      </arrangement>[m
[32m+[m[32m    </codeStyleSettings>[m
[32m+[m[32m  </code_scheme>[m
[32m+[m[32m</component>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/gradle.xml b/.idea/gradle.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..b9f8a5e[m
[1m--- /dev/null[m
[1m+++ b/.idea/gradle.xml[m
[36m@@ -0,0 +1,20 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="GradleSettings">[m
[32m+[m[32m    <option name="linkedExternalProjectsSettings">[m
[32m+[m[32m      <GradleProjectSettings>[m
[32m+[m[32m        <option name="testRunner" value="PLATFORM" />[m
[32m+[m[32m        <option name="distributionType" value="DEFAULT_WRAPPED" />[m
[32m+[m[32m        <option name="externalProjectPath" value="$PROJECT_DIR$" />[m
[32m+[m[32m        <option name="gradleJvm" value="1.8" />[m
[32m+[m[32m        <option name="modules">[m
[32m+[m[32m          <set>[m
[32m+[m[32m            <option value="$PROJECT_DIR$" />[m
[32m+[m[32m            <option value="$PROJECT_DIR$/app" />[m
[32m+[m[32m          </set>[m
[32m+[m[32m        </option>[m
[32m+[m[32m        <option name="resolveModulePerSourceSet" value="false" />[m
[32m+[m[32m      </GradleProjectSettings>[m
[32m+[m[32m    </option>[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/jarRepositories.xml b/.idea/jarRepositories.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..a5f05cd[m
[1m--- /dev/null[m
[1m+++ b/.idea/jarRepositories.xml[m
[36m@@ -0,0 +1,25 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="RemoteRepositoriesConfiguration">[m
[32m+[m[32m    <remote-repository>[m
[32m+[m[32m      <option name="id" value="central" />[m
[32m+[m[32m      <option name="name" value="Maven Central repository" />[m
[32m+[m[32m      <option name="url" value="https://repo1.maven.org/maven2" />[m
[32m+[m[32m    </remote-repository>[m
[32m+[m[32m    <remote-repository>[m
[32m+[m[32m      <option name="id" value="jboss.community" />[m
[32m+[m[32m      <option name="name" value="JBoss Community repository" />[m
[32m+[m[32m      <option name="url" value="https://repository.jboss.org/nexus/content/repositories/public/" />[m
[32m+[m[32m    </remote-repository>[m
[32m+[m[32m    <remote-repository>[m
[32m+[m[32m      <option name="id" value="BintrayJCenter" />[m
[32m+[m[32m      <option name="name" value="BintrayJCenter" />[m
[32m+[m[32m      <option name="url" value="https://jcenter.bintray.com/" />[m
[32m+[m[32m    </remote-repository>[m
[32m+[m[32m    <remote-repository>[m
[32m+[m[32m      <option name="id" value="Google" />[m
[32m+[m[32m      <option name="name" value="Google" />[m
[32m+[m[32m      <option name="url" value="https://dl.google.com/dl/android/maven2/" />[m
[32m+[m[32m    </remote-repository>[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/misc.xml b/.idea/misc.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..37a7509[m
[1m--- /dev/null[m
[1m+++ b/.idea/misc.xml[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="ProjectRootManager" version="2" languageLevel="JDK_1_7" project-jdk-name="1.8" project-jdk-type="JavaSDK">[m
[32m+[m[32m    <output url="file://$PROJECT_DIR$/build/classes" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m  <component name="ProjectType">[m
[32m+[m[32m    <option name="id" value="Android" />[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/.idea/runConfigurations.xml b/.idea/runConfigurations.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..7f68460[m
[1m--- /dev/null[m
[1m+++ b/.idea/runConfigurations.xml[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<project version="4">[m
[32m+[m[32m  <component name="RunConfigurationProducerService">[m
[32m+[m[32m    <option name="ignoredProducers">[m
[32m+[m[32m      <set>[m
[32m+[m[32m        <option value="org.jetbrains.plugins.gradle.execution.test.runner.AllInPackageGradleConfigurationProducer" />[m
[32m+[m[32m        <option value="org.jetbrains.plugins.gradle.execution.test.runner.TestClassGradleConfigurationProducer" />[m
[32m+[m[32m        <option value="org.jetbrains.plugins.gradle.execution.test.runner.TestMethodGradleConfigurationProducer" />[m
[32m+[m[32m      </set>[m
[32m+[m[32m    </option>[m
[32m+[m[32m  </component>[m
[32m+[m[32m</project>[m
\ No newline at end of file[m
[1mdiff --git a/app/.gitignore b/app/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..42afabf[m
[1m--- /dev/null[m
[1m+++ b/app/.gitignore[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m/build[m
\ No newline at end of file[m
[1mdiff --git a/app/build.gradle b/app/build.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..c634fcb[m
[1m--- /dev/null[m
[1m+++ b/app/build.gradle[m
[36m@@ -0,0 +1,33 @@[m
[32m+[m[32mapply plugin: 'com.android.application'[m
[32m+[m
[32m+[m[32mandroid {[m
[32m+[m[32m    compileSdkVersion 29[m
[32m+[m[32m    buildToolsVersion "30.0.2"[m
[32m+[m
[32m+[m[32m    defaultConfig {[m
[32m+[m[32m        applicationId "vn.edu.csc.tableviewapp"[m
[32m+[m[32m        minSdkVersion 29[m
[32m+[m[32m        targetSdkVersion 29[m
[32m+[m[32m        versionCode 1[m
[32m+[m[32m        versionName "1.0"[m
[32m+[m
[32m+[m[32m        testInstrumentationRunner "androidx.test.runner.AndroidJUnitRunner"[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    buildTypes {[m
[32m+[m[32m        release {[m
[32m+[m[32m            minifyEnabled false[m
[32m+[m[32m            proguardFiles getDefaultProguardFile('proguard-android-optimize.txt'), 'proguard-rules.pro'[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdependencies {[m
[32m+[m[32m    implementation fileTree(dir: "libs", include: ["*.jar"])[m
[32m+[m[32m    implementation 'androidx.appcompat:appcompat:1.2.0'[m
[32m+[m[32m    implementation 'androidx.constraintlayout:constraintlayout:2.0.1'[m
[32m+[m[32m    testImplementation 'junit:junit:4.12'[m
[32m+[m[32m    androidTestImplementation 'androidx.test.ext:junit:1.1.2'[m
[32m+[m[32m    androidTestImplementation 'androidx.test.espresso:espresso-core:3.3.0'[m
[32m+[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/proguard-rules.pro b/app/proguard-rules.pro[m
[1mnew file mode 100644[m
[1mindex 0000000..481bb43[m
[1m--- /dev/null[m
[1m+++ b/app/proguard-rules.pro[m
[36m@@ -0,0 +1,21 @@[m
[32m+[m[32m# Add project specific ProGuard rules here.[m
[32m+[m[32m# You can control the set of applied configuration files using the[m
[32m+[m[32m# proguardFiles setting in build.gradle.[m
[32m+[m[32m#[m
[32m+[m[32m# For more details, see[m
[32m+[m[32m#   http://developer.android.com/guide/developing/tools/proguard.html[m
[32m+[m
[32m+[m[32m# If your project uses WebView with JS, uncomment the following[m
[32m+[m[32m# and specify the fully qualified class name to the JavaScript interface[m
[32m+[m[32m# class:[m
[32m+[m[32m#-keepclassmembers class fqcn.of.javascript.interface.for.webview {[m
[32m+[m[32m#   public *;[m
[32m+[m[32m#}[m
[32m+[m
[32m+[m[32m# Uncomment this to preserve the line number information for[m
[32m+[m[32m# debugging stack traces.[m
[32m+[m[32m#-keepattributes SourceFile,LineNumberTable[m
[32m+[m
[32m+[m[32m# If you keep the line number information, uncomment this to[m
[32m+[m[32m# hide the original source file name.[m
[32m+[m[32m#-renamesourcefileattribute SourceFile[m
\ No newline at end of file[m
[1mdiff --git a/app/src/androidTest/java/vn/edu/csc/tableviewapp/ExampleInstrumentedTest.java b/app/src/androidTest/java/vn/edu/csc/tableviewapp/ExampleInstrumentedTest.java[m
[1mnew file mode 100644[m
[1mindex 0000000..4e1c322[m
[1m--- /dev/null[m
[1m+++ b/app/src/androidTest/java/vn/edu/csc/tableviewapp/ExampleInstrumentedTest.java[m
[36m@@ -0,0 +1,26 @@[m
[32m+[m[32mpackage vn.edu.csc.tableviewapp;[m
[32m+[m
[32m+[m[32mimport android.content.Context;[m
[32m+[m
[32m+[m[32mimport androidx.test.platform.app.InstrumentationRegistry;[m
[32m+[m[32mimport androidx.test.ext.junit.runners.AndroidJUnit4;[m
[32m+[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m[32mimport org.junit.runner.RunWith;[m
[32m+[m
[32m+[m[32mimport static org.junit.Assert.*;[m
[32m+[m
[32m+[m[32m/**[m
[32m+[m[32m * Instrumented test, which will execute on an Android device.[m
[32m+[m[32m *[m
[32m+[m[32m * @see <a href="http://d.android.com/tools/testing">Testing documentation</a>[m
[32m+[m[32m */[m
[32m+[m[32m@RunWith(AndroidJUnit4.class)[m
[32m+[m[32mpublic class ExampleInstrumentedTest {[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void useAppContext() {[m
[32m+[m[32m        // Context of the app under test.[m
[32m+[m[32m        Context appContext = InstrumentationRegistry.getInstrumentation().getTargetContext();[m
[32m+[m[32m        assertEquals("vn.edu.csc.tableviewapp", appContext.getPackageName());[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/AndroidManifest.xml b/app/src/main/AndroidManifest.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..4a50eb5[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/AndroidManifest.xml[m
[36m@@ -0,0 +1,21 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<manifest xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    package="vn.edu.csc.tableviewapp">[m
[32m+[m
[32m+[m[32m    <application[m
[32m+[m[32m        android:allowBackup="true"[m
[32m+[m[32m        android:icon="@mipmap/ic_launcher"[m
[32m+[m[32m        android:label="@string/app_name"[m
[32m+[m[32m        android:roundIcon="@mipmap/ic_launcher_round"[m
[32m+[m[32m        android:supportsRtl="true"[m
[32m+[m[32m        android:theme="@style/AppTheme">[m
[32m+[m[32m        <activity android:name=".MainActivity">[m
[32m+[m[32m            <intent-filter>[m
[32m+[m[32m                <action android:name="android.intent.action.MAIN" />[m
[32m+[m
[32m+[m[32m                <category android:name="android.intent.category.LAUNCHER" />[m
[32m+[m[32m            </intent-filter>[m
[32m+[m[32m        </activity>[m
[32m+[m[32m    </application>[m
[32m+[m
[32m+[m[32m</manifest>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/java/vn/edu/csc/tableviewapp/MainActivity.java b/app/src/main/java/vn/edu/csc/tableviewapp/MainActivity.java[m
[1mnew file mode 100644[m
[1mindex 0000000..d26dd5a[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/java/vn/edu/csc/tableviewapp/MainActivity.java[m
[36m@@ -0,0 +1,14 @@[m
[32m+[m[32mpackage vn.edu.csc.tableviewapp;[m
[32m+[m
[32m+[m[32mimport androidx.appcompat.app.AppCompatActivity;[m
[32m+[m
[32m+[m[32mimport android.os.Bundle;[m
[32m+[m
[32m+[m[32mpublic class MainActivity extends AppCompatActivity {[m
[32m+[m
[32m+[m[32m    @Override[m
[32m+[m[32m    protected void onCreate(Bundle savedInstanceState) {[m
[32m+[m[32m        super.onCreate(savedInstanceState);[m
[32m+[m[32m        setContentView(R.layout.activity_main);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/drawable-v24/ic_launcher_foreground.xml b/app/src/main/res/drawable-v24/ic_launcher_foreground.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..2b068d1[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable-v24/ic_launcher_foreground.xml[m
[36m@@ -0,0 +1,30 @@[m
[32m+[m[32m<vector xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:aapt="http://schemas.android.com/aapt"[m
[32m+[m[32m    android:width="108dp"[m
[32m+[m[32m    android:height="108dp"[m
[32m+[m[32m    android:viewportWidth="108"[m
[32m+[m[32m    android:viewportHeight="108">[m
[32m+[m[32m    <path android:pathData="M31,63.928c0,0 6.4,-11 12.1,-13.1c7.2,-2.6 26,-1.4 26,-1.4l38.1,38.1L107,108.928l-32,-1L31,63.928z">[m
[32m+[m[32m        <aapt:attr name="android:fillColor">[m
[32m+[m[32m            <gradient[m
[32m+[m[32m                android:endX="85.84757"[m
[32m+[m[32m                android:endY="92.4963"[m
[32m+[m[32m                android:startX="42.9492"[m
[32m+[m[32m                android:startY="49.59793"[m
[32m+[m[32m                android:type="linear">[m
[32m+[m[32m                <item[m
[32m+[m[32m                    android:color="#44000000"[m
[32m+[m[32m                    android:offset="0.0" />[m
[32m+[m[32m                <item[m
[32m+[m[32m                    android:color="#00000000"[m
[32m+[m[32m                    android:offset="1.0" />[m
[32m+[m[32m            </gradient>[m
[32m+[m[32m        </aapt:attr>[m
[32m+[m[32m    </path>[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#FFFFFF"[m
[32m+[m[32m        android:fillType="nonZero"[m
[32m+[m[32m        android:pathData="M65.3,45.828l3.8,-6.6c0.2,-0.4 0.1,-0.9 -0.3,-1.1c-0.4,-0.2 -0.9,-0.1 -1.1,0.3l-3.9,6.7c-6.3,-2.8 -13.4,-2.8 -19.7,0l-3.9,-6.7c-0.2,-0.4 -0.7,-0.5 -1.1,-0.3C38.8,38.328 38.7,38.828 38.9,39.228l3.8,6.6C36.2,49.428 31.7,56.028 31,63.928h46C76.3,56.028 71.8,49.428 65.3,45.828zM43.4,57.328c-0.8,0 -1.5,-0.5 -1.8,-1.2c-0.3,-0.7 -0.1,-1.5 0.4,-2.1c0.5,-0.5 1.4,-0.7 2.1,-0.4c0.7,0.3 1.2,1 1.2,1.8C45.3,56.528 44.5,57.328 43.4,57.328L43.4,57.328zM64.6,57.328c-0.8,0 -1.5,-0.5 -1.8,-1.2s-0.1,-1.5 0.4,-2.1c0.5,-0.5 1.4,-0.7 2.1,-0.4c0.7,0.3 1.2,1 1.2,1.8C66.5,56.528 65.6,57.328 64.6,57.328L64.6,57.328z"[m
[32m+[m[32m        android:strokeWidth="1"[m
[32m+[m[32m        android:strokeColor="#00000000" />[m
[32m+[m[32m</vector>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/drawable/ic_launcher_background.xml b/app/src/main/res/drawable/ic_launcher_background.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..07d5da9[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/drawable/ic_launcher_background.xml[m
[36m@@ -0,0 +1,170 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<vector xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    android:width="108dp"[m
[32m+[m[32m    android:height="108dp"[m
[32m+[m[32m    android:viewportWidth="108"[m
[32m+[m[32m    android:viewportHeight="108">[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#3DDC84"[m
[32m+[m[32m        android:pathData="M0,0h108v108h-108z" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M9,0L9,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M19,0L19,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M29,0L29,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M39,0L39,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M49,0L49,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M59,0L59,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M69,0L69,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M79,0L79,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M89,0L89,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M99,0L99,108"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,9L108,9"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,19L108,19"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,29L108,29"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,39L108,39"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,49L108,49"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,59L108,59"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,69L108,69"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,79L108,79"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,89L108,89"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M0,99L108,99"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M19,29L89,29"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M19,39L89,39"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M19,49L89,49"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M19,59L89,59"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M19,69L89,69"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M19,79L89,79"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M29,19L29,89"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M39,19L39,89"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M49,19L49,89"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M59,19L59,89"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M69,19L69,89"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m    <path[m
[32m+[m[32m        android:fillColor="#00000000"[m
[32m+[m[32m        android:pathData="M79,19L79,89"[m
[32m+[m[32m        android:strokeWidth="0.8"[m
[32m+[m[32m        android:strokeColor="#33FFFFFF" />[m
[32m+[m[32m</vector>[m
[1mdiff --git a/app/src/main/res/layout/activity_main.xml b/app/src/main/res/layout/activity_main.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..4fc2444[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/layout/activity_main.xml[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:app="http://schemas.android.com/apk/res-auto"[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32m    android:layout_width="match_parent"[m
[32m+[m[32m    android:layout_height="match_parent"[m
[32m+[m[32m    tools:context=".MainActivity">[m
[32m+[m
[32m+[m[32m    <TextView[m
[32m+[m[32m        android:layout_width="wrap_content"[m
[32m+[m[32m        android:layout_height="wrap_content"[m
[32m+[m[32m        android:text="Hello World!"[m
[32m+[m[32m        app:layout_constraintBottom_toBottomOf="parent"[m
[32m+[m[32m        app:layout_constraintLeft_toLeftOf="parent"[m
[32m+[m[32m        app:layout_constraintRight_toRightOf="parent"[m
[32m+[m[32m        app:layout_constraintTop_toTopOf="parent" />[m
[32m+[m
[32m+[m[32m</androidx.constraintlayout.widget.ConstraintLayout>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/mipmap-anydpi-v26/ic_launcher.xml b/app/src/main/res/mipmap-anydpi-v26/ic_launcher.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..eca70cf[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/mipmap-anydpi-v26/ic_launcher.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<adaptive-icon xmlns:android="http://schemas.android.com/apk/res/android">[m
[32m+[m[32m    <background android:drawable="@drawable/ic_launcher_background" />[m
[32m+[m[32m    <foreground android:drawable="@drawable/ic_launcher_foreground" />[m
[32m+[m[32m</adaptive-icon>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/mipmap-anydpi-v26/ic_launcher_round.xml b/app/src/main/res/mipmap-anydpi-v26/ic_launcher_round.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..eca70cf[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/mipmap-anydpi-v26/ic_launcher_round.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<adaptive-icon xmlns:android="http://schemas.android.com/apk/res/android">[m
[32m+[m[32m    <background android:drawable="@drawable/ic_launcher_background" />[m
[32m+[m[32m    <foreground android:drawable="@drawable/ic_launcher_foreground" />[m
[32m+[m[32m</adaptive-icon>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/mipmap-hdpi/ic_launcher.png b/app/src/main/res/mipmap-hdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..a571e60[m
Binary files /dev/null and b/app/src/main/res/mipmap-hdpi/ic_launcher.png differ
[1mdiff --git a/app/src/main/res/mipmap-hdpi/ic_launcher_round.png b/app/src/main/res/mipmap-hdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..61da551[m
Binary files /dev/null and b/app/src/main/res/mipmap-hdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/mipmap-mdpi/ic_launcher.png b/app/src/main/res/mipmap-mdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..c41dd28[m
Binary files /dev/null and b/app/src/main/res/mipmap-mdpi/ic_launcher.png differ
[1mdiff --git a/app/src/main/res/mipmap-mdpi/ic_launcher_round.png b/app/src/main/res/mipmap-mdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..db5080a[m
Binary files /dev/null and b/app/src/main/res/mipmap-mdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/mipmap-xhdpi/ic_launcher.png b/app/src/main/res/mipmap-xhdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6dba46d[m
Binary files /dev/null and b/app/src/main/res/mipmap-xhdpi/ic_launcher.png differ
[1mdiff --git a/app/src/main/res/mipmap-xhdpi/ic_launcher_round.png b/app/src/main/res/mipmap-xhdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..da31a87[m
Binary files /dev/null and b/app/src/main/res/mipmap-xhdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/mipmap-xxhdpi/ic_launcher.png b/app/src/main/res/mipmap-xxhdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..15ac681[m
Binary files /dev/null and b/app/src/main/res/mipmap-xxhdpi/ic_launcher.png differ
[1mdiff --git a/app/src/main/res/mipmap-xxhdpi/ic_launcher_round.png b/app/src/main/res/mipmap-xxhdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..b216f2d[m
Binary files /dev/null and b/app/src/main/res/mipmap-xxhdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/mipmap-xxxhdpi/ic_launcher.png b/app/src/main/res/mipmap-xxxhdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..f25a419[m
Binary files /dev/null and b/app/src/main/res/mipmap-xxxhdpi/ic_launcher.png differ
[1mdiff --git a/app/src/main/res/mipmap-xxxhdpi/ic_launcher_round.png b/app/src/main/res/mipmap-xxxhdpi/ic_launcher_round.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e96783c[m
Binary files /dev/null and b/app/src/main/res/mipmap-xxxhdpi/ic_launcher_round.png differ
[1mdiff --git a/app/src/main/res/values/colors.xml b/app/src/main/res/values/colors.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..4faecfa[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/values/colors.xml[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<resources>[m
[32m+[m[32m    <color name="colorPrimary">#6200EE</color>[m
[32m+[m[32m    <color name="colorPrimaryDark">#3700B3</color>[m
[32m+[m[32m    <color name="colorAccent">#03DAC5</color>[m
[32m+[m[32m</resources>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/values/strings.xml b/app/src/main/res/values/strings.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..20299d6[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/values/strings.xml[m
[36m@@ -0,0 +1,3 @@[m
[32m+[m[32m<resources>[m
[32m+[m[32m    <string name="app_name">TableViewApp</string>[m
[32m+[m[32m</resources>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/main/res/values/styles.xml b/app/src/main/res/values/styles.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..fac9291[m
[1m--- /dev/null[m
[1m+++ b/app/src/main/res/values/styles.xml[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32m<resources>[m
[32m+[m[32m    <!-- Base application theme. -->[m
[32m+[m[32m    <style name="AppTheme" parent="Theme.AppCompat.Light.DarkActionBar">[m
[32m+[m[32m        <!-- Customize your theme here. -->[m
[32m+[m[32m        <item name="colorPrimary">@color/colorPrimary</item>[m
[32m+[m[32m        <item name="colorPrimaryDark">@color/colorPrimaryDark</item>[m
[32m+[m[32m        <item name="colorAccent">@color/colorAccent</item>[m
[32m+[m[32m    </style>[m
[32m+[m
[32m+[m[32m</resources>[m
\ No newline at end of file[m
[1mdiff --git a/app/src/test/java/vn/edu/csc/tableviewapp/ExampleUnitTest.java b/app/src/test/java/vn/edu/csc/tableviewapp/ExampleUnitTest.java[m
[1mnew file mode 100644[m
[1mindex 0000000..b5df363[m
[1m--- /dev/null[m
[1m+++ b/app/src/test/java/vn/edu/csc/tableviewapp/ExampleUnitTest.java[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32mpackage vn.edu.csc.tableviewapp;[m
[32m+[m
[32m+[m[32mimport org.junit.Test;[m
[32m+[m
[32m+[m[32mimport static org.junit.Assert.*;[m
[32m+[m
[32m+[m[32m/**[m
[32m+[m[32m * Example local unit test, which will execute on the development machine (host).[m
[32m+[m[32m *[m
[32m+[m[32m * @see <a href="http://d.android.com/tools/testing">Testing documentation</a>[m
[32m+[m[32m */[m
[32m+[m[32mpublic class ExampleUnitTest {[m
[32m+[m[32m    @Test[m
[32m+[m[32m    public void addition_isCorrect() {[m
[32m+[m[32m        assertEquals(4, 2 + 2);[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/build.gradle b/build.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..6754c23[m
[1m--- /dev/null[m
[1m+++ b/build.gradle[m
[36m@@ -0,0 +1,24 @@[m
[32m+[m[32m// Top-level build file where you can add configuration options common to all sub-projects/modules.[m
[32m+[m[32mbuildscript {[m
[32m+[m[32m    repositories {[m
[32m+[m[32m        google()[m
[32m+[m[32m        jcenter()[m
[32m+[m[32m    }[m
[32m+[m[32m    dependencies {[m
[32m+[m[32m        classpath "com.android.tools.build:gradle:4.0.1"[m
[32m+[m
[32m+[m[32m        // NOTE: Do not place your application dependencies here; they belong[m
[32m+[m[32m        // in the individual module build.gradle files[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mallprojects {[m
[32m+[m[32m    repositories {[m
[32m+[m[32m        google()[m
[32m+[m[32m        jcenter()[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mtask clean(type: Delete) {[m
[32m+[m[32m    delete rootProject.buildDir[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/gradle.properties b/gradle.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..c52ac9b[m
[1m--- /dev/null[m
[1m+++ b/gradle.properties[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32m# Project-wide Gradle settings.[m
[32m+[m[32m# IDE (e.g. Android Studio) users:[m
[32m+[m[32m# Gradle settings configured through the IDE *will override*[m
[32m+[m[32m# any settings specified in this file.[m
[32m+[m[32m# For more details on how to configure your build environment visit[m
[32m+[m[32m# http://www.gradle.org/docs/current/userguide/build_environment.html[m
[32m+[m[32m# Specifies the JVM arguments used for the daemon process.[m
[32m+[m[32m# The setting is particularly useful for tweaking memory settings.[m
[32m+[m[32morg.gradle.jvmargs=-Xmx2048m[m
[32m+[m[32m# When configured, Gradle will run in incubating parallel mode.[m
[32m+[m[32m# This option should only be used with decoupled projects. More details, visit[m
[32m+[m[32m# http://www.gradle.org/docs/current/userguide/multi_project_builds.html#sec:decoupled_projects[m
[32m+[m[32m# org.gradle.parallel=true[m
[32m+[m[32m# AndroidX package structure to make it clearer which packages are bundled with the[m
[32m+[m[32m# Android operating system, and which are packaged with your app"s APK[m
[32m+[m[32m# https://developer.android.com/topic/libraries/support-library/androidx-rn[m
[32m+[m[32mandroid.useAndroidX=true[m
[32m+[m[32m# Automatically convert third-party libraries to use AndroidX[m
[32m+[m[32mandroid.enableJetifier=true[m
\ No newline at end of file[m
[1mdiff --git a/gradle/wrapper/gradle-wrapper.jar b/gradle/wrapper/gradle-wrapper.jar[m
[1mnew file mode 100644[m
[1mindex 0000000..f6b961f[m
Binary files /dev/null and b/gradle/wrapper/gradle-wrapper.jar differ
[1mdiff --git a/gradle/wrapper/gradle-wrapper.properties b/gradle/wrapper/gradle-wrapper.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..0a2ba14[m
[1m--- /dev/null[m
[1m+++ b/gradle/wrapper/gradle-wrapper.properties[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m#Sat Sep 26 21:15:41 ICT 2020[m
[32m+[m[32mdistributionBase=GRADLE_USER_HOME[m
[32m+[m[32mdistributionPath=wrapper/dists[m
[32m+[m[32mzipStoreBase=GRADLE_USER_HOME[m
[32m+[m[32mzipStorePath=wrapper/dists[m
[32m+[m[32mdistributionUrl=https\://services.gradle.org/distributions/gradle-6.1.1-all.zip[m
[1mdiff --git a/gradlew b/gradlew[m
[1mnew file mode 100644[m
[1mindex 0000000..cccdd3d[m
[1m--- /dev/null[m
[1m+++ b/gradlew[m
[36m@@ -0,0 +1,172 @@[m
[32m+[m[32m#!/usr/bin/env sh[m
[32m+[m
[32m+[m[32m##############################################################################[m
[32m+[m[32m##[m
[32m+[m[32m##  Gradle start up script for UN*X[m
[32m+[m[32m##[m
[32m+[m[32m##############################################################################[m
[32m+[m
[32m+[m[32m# Attempt to set APP_HOME[m
[32m+[m[32m# Resolve links: $0 may be a link[m
[32m+[m[32mPRG="$0"[m
[32m+[m[32m# Need this for relative symlinks.[m
[32m+[m[32mwhile [ -h "$PRG" ] ; do[m
[32m+[m[32m    ls=`ls -ld "$PRG"`[m
[32m+[m[32m    link=`expr "$ls" : '.*-> \(.*\)$'`[m
[32m+[m[32m    if expr "$link" : '/.*' > /dev/null; then[m
[32m+[m[32m        PRG="$link"[m
[32m+[m[32m    else[m
[32m+[m[32m        PRG=`dirname "$PRG"`"/$link"[m
[32m+[m[32m    fi[m
[32m+[m[32mdone[m
[32m+[m[32mSAVED="`pwd`"[m
[32m+[m[32mcd "`dirname \"$PRG\"`/" >/dev/null[m
[32m+[m[32mAPP_HOME="`pwd -P`"[m
[32m+[m[32mcd "$SAVED" >/dev/null[m
[32m+[m
[32m+[m[32mAPP_NAME="Gradle"[m
[32m+[m[32mAPP_BASE_NAME=`basename "$0"`[m
[32m+[m
[32m+[m[32m# Add default JVM options here. You can also use JAVA_OPTS and GRADLE_OPTS to pass JVM options to this script.[m
[32m+[m[32mDEFAULT_JVM_OPTS=""[m
[32m+[m
[32m+[m[32m# Use the maximum available, or set MAX_FD != -1 to use that value.[m
[32m+[m[32mMAX_FD="maximum"[m
[32m+[m
[32m+[m[32mwarn () {[m
[32m+[m[32m    echo "$*"[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdie () {[m
[32m+[m[32m    echo[m
[32m+[m[32m    echo "$*"[m
[32m+[m[32m    echo[m
[32m+[m[32m    exit 1[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m# OS specific support (must be 'true' or 'false').[m
[32m+[m[32mcygwin=false[m
[32m+[m[32mmsys=false[m
[32m+[m[32mdarwin=false[m
[32m+[m[32mnonstop=false[m
[32m+[m[32mcase "`uname`" in[m
[32m+[m[32m  CYGWIN* )[m
[32m+[m[32m    cygwin=true[m
[32m+[m[32m    ;;[m
[32m+[m[32m  Darwin* )[m
[32m+[m[32m    darwin=true[m
[32m+[m[32m    ;;[m
[32m+[m[32m  MINGW* )[m
[32m+[m[32m    msys=true[m
[32m+[m[32m    ;;[m
[32m+[m[32m  NONSTOP* )[m
[32m+[m[32m    nonstop=true[m
[32m+[m[32m    ;;[m
[32m+[m[32mesac[m
[32m+[m
[32m+[m[32mCLASSPATH=$APP_HOME/gradle/wrapper/gradle-wrapper.jar[m
[32m+[m
[32m+[m[32m# Determine the Java command to use to start the JVM.[m
[32m+[m[32mif [ -n "$JAVA_HOME" ] ; then[m
[32m+[m[32m    if [ -x "$JAVA_HOME/jre/sh/java" ] ; then[m
[32m+[m[32m        # IBM's JDK on AIX uses strange locations for the executables[m
[32m+[m[32m        JAVACMD="$JAVA_HOME/jre/sh/java"[m
[32m+[m[32m    else[m
[32m+[m[32m        JAVACMD="$JAVA_HOME/bin/java"[m
[32m+[m[32m    fi[m
[32m+[m[32m    if [ ! -x "$JAVACMD" ] ; then[m
[32m+[m[32m        die "ERROR: JAVA_HOME is set to an invalid directory: $JAVA_HOME[m
[32m+[m
[32m+[m[32mPlease set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mlocation of your Java installation."[m
[32m+[m[32m    fi[m
[32m+[m[32melse[m
[32m+[m[32m    JAVACMD="java"[m
[32m+[m[32m    which java >/dev/null 2>&1 || die "ERROR: JAVA_HOME is not set and no 'java' command could be found in your PATH.[m
[32m+[m
[32m+[m[32mPlease set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mlocation of your Java installation."[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# Increase the maximum file descriptors if we can.[m
[32m+[m[32mif [ "$cygwin" = "false" -a "$darwin" = "false" -a "$nonstop" = "false" ] ; then[m
[32m+[m[32m    MAX_FD_LIMIT=`ulimit -H -n`[m
[32m+[m[32m    if [ $? -eq 0 ] ; then[m
[32m+[m[32m        if [ "$MAX_FD" = "maximum" -o "$MAX_FD" = "max" ] ; then[m
[32m+[m[32m            MAX_FD="$MAX_FD_LIMIT"[m
[32m+[m[32m        fi[m
[32m+[m[32m        ulimit -n $MAX_FD[m
[32m+[m[32m        if [ $? -ne 0 ] ; then[m
[32m+[m[32m            warn "Could not set maximum file descriptor limit: $MAX_FD"[m
[32m+[m[32m        fi[m
[32m+[m[32m    else[m
[32m+[m[32m        warn "Could not query maximum file descriptor limit: $MAX_FD_LIMIT"[m
[32m+[m[32m    fi[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# For Darwin, add options to specify how the application appears in the dock[m
[32m+[m[32mif $darwin; then[m
[32m+[m[32m    GRADLE_OPTS="$GRADLE_OPTS \"-Xdock:name=$APP_NAME\" \"-Xdock:icon=$APP_HOME/media/gradle.icns\""[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# For Cygwin, switch paths to Windows format before running java[m
[32m+[m[32mif $cygwin ; then[m
[32m+[m[32m    APP_HOME=`cygpath --path --mixed "$APP_HOME"`[m
[32m+[m[32m    CLASSPATH=`cygpath --path --mixed "$CLASSPATH"`[m
[32m+[m[32m    JAVACMD=`cygpath --unix "$JAVACMD"`[m
[32m+[m
[32m+[m[32m    # We build the pattern for arguments to be converted via cygpath[m
[32m+[m[32m    ROOTDIRSRAW=`find -L / -maxdepth 1 -mindepth 1 -type d 2>/dev/null`[m
[32m+[m[32m    SEP=""[m
[32m+[m[32m    for dir in $ROOTDIRSRAW ; do[m
[32m+[m[32m        ROOTDIRS="$ROOTDIRS$SEP$dir"[m
[32m+[m[32m        SEP="|"[m
[32m+[m[32m    done[m
[32m+[m[32m    OURCYGPATTERN="(^($ROOTDIRS))"[m
[32m+[m[32m    # Add a user-defined pattern to the cygpath arguments[m
[32m+[m[32m    if [ "$GRADLE_CYGPATTERN" != "" ] ; then[m
[32m+[m[32m        OURCYGPATTERN="$OURCYGPATTERN|($GRADLE_CYGPATTERN)"[m
[32m+[m[32m    fi[m
[32m+[m[32m    # Now convert the arguments - kludge to limit ourselves to /bin/sh[m
[32m+[m[32m    i=0[m
[32m+[m[32m    for arg in "$@" ; do[m
[32m+[m[32m        CHECK=`echo "$arg"|egrep -c "$OURCYGPATTERN" -`[m
[32m+[m[32m        CHECK2=`echo "$arg"|egrep -c "^-"`                                 ### Determine if an option[m
[32m+[m
[32m+[m[32m        if [ $CHECK -ne 0 ] && [ $CHECK2 -eq 0 ] ; then                    ### Added a condition[m
[32m+[m[32m            eval `echo args$i`=`cygpath --path --ignore --mixed "$arg"`[m
[32m+[m[32m        else[m
[32m+[m[32m            eval `echo args$i`="\"$arg\""[m
[32m+[m[32m        fi[m
[32m+[m[32m        i=$((i+1))[m
[32m+[m[32m    done[m
[32m+[m[32m    case $i in[m
[32m+[m[32m        (0) set -- ;;[m
[32m+[m[32m        (1) set -- "$args0" ;;[m
[32m+[m[32m        (2) set -- "$args0" "$args1" ;;[m
[32m+[m[32m        (3) set -- "$args0" "$args1" "$args2" ;;[m
[32m+[m[32m        (4) set -- "$args0" "$args1" "$args2" "$args3" ;;[m
[32m+[m[32m        (5) set -- "$args0" "$args1" "$args2" "$args3" "$args4" ;;[m
[32m+[m[32m        (6) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" ;;[m
[32m+[m[32m        (7) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" "$args6" ;;[m
[32m+[m[32m        (8) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" "$args6" "$args7" ;;[m
[32m+[m[32m        (9) set -- "$args0" "$args1" "$args2" "$args3" "$args4" "$args5" "$args6" "$args7" "$args8" ;;[m
[32m+[m[32m    esac[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32m# Escape application args[m
[32m+[m[32msave () {[m
[32m+[m[32m    for i do printf %s\\n "$i" | sed "s/'/'\\\\''/g;1s/^/'/;\$s/\$/' \\\\/" ; done[m
[32m+[m[32m    echo " "[m
[32m+[m[32m}[m
[32m+[m[32mAPP_ARGS=$(save "$@")[m
[32m+[m
[32m+[m[32m# Collect all arguments for the java command, following the shell quoting and substitution rules[m
[32m+[m[32meval set -- $DEFAULT_JVM_OPTS $JAVA_OPTS $GRADLE_OPTS "\"-Dorg.gradle.appname=$APP_BASE_NAME\"" -classpath "\"$CLASSPATH\"" org.gradle.wrapper.GradleWrapperMain "$APP_ARGS"[m
[32m+[m
[32m+[m[32m# by default we should be in the correct project dir, but when run from Finder on Mac, the cwd is wrong[m
[32m+[m[32mif [ "$(uname)" = "Darwin" ] && [ "$HOME" = "$PWD" ]; then[m
[32m+[m[32m  cd "$(dirname "$0")"[m
[32m+[m[32mfi[m
[32m+[m
[32m+[m[32mexec "$JAVACMD" "$@"[m
[1mdiff --git a/gradlew.bat b/gradlew.bat[m
[1mnew file mode 100644[m
[1mindex 0000000..f955316[m
[1m--- /dev/null[m
[1m+++ b/gradlew.bat[m
[36m@@ -0,0 +1,84 @@[m
[32m+[m[32m@if "%DEBUG%" == "" @echo off[m
[32m+[m[32m@rem ##########################################################################[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem  Gradle startup script for Windows[m
[32m+[m[32m@rem[m
[32m+[m[32m@rem ##########################################################################[m
[32m+[m
[32m+[m[32m@rem Set local scope for the variables with windows NT shell[m
[32m+[m[32mif "%OS%"=="Windows_NT" setlocal[m
[32m+[m
[32m+[m[32mset DIRNAME=%~dp0[m
[32m+[m[32mif "%DIRNAME%" == "" set DIRNAME=.[m
[32m+[m[32mset APP_BASE_NAME=%~n0[m
[32m+[m[32mset APP_HOME=%DIRNAME%[m
[32m+[m
[32m+[m[32m@rem Add default JVM options here. You can also use JAVA_OPTS and GRADLE_OPTS to pass JVM options to this script.[m
[32m+[m[32mset DEFAULT_JVM_OPTS=[m
[32m+[m
[32m+[m[32m@rem Find java.exe[m
[32m+[m[32mif defined JAVA_HOME goto findJavaFromJavaHome[m
[32m+[m
[32m+[m[32mset JAVA_EXE=java.exe[m
[32m+[m[32m%JAVA_EXE% -version >NUL 2>&1[m
[32m+[m[32mif "%ERRORLEVEL%" == "0" goto init[m
[32m+[m
[32m+[m[32mecho.[m
[32m+[m[32mecho ERROR: JAVA_HOME is not set and no 'java' command could be found in your PATH.[m
[32m+[m[32mecho.[m
[32m+[m[32mecho Please set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mecho location of your Java installation.[m
[32m+[m
[32m+[m[32mgoto fail[m
[32m+[m
[32m+[m[32m:findJavaFromJavaHome[m
[32m+[m[32mset JAVA_HOME=%JAVA_HOME:"=%[m
[32m+[m[32mset JAVA_EXE=%JAVA_HOME%/bin/java.exe[m
[32m+[m
[32m+[m[32mif exist "%JAVA_EXE%" goto init[m
[32m+[m
[32m+[m[32mecho.[m
[32m+[m[32mecho ERROR: JAVA_HOME is set to an invalid directory: %JAVA_HOME%[m
[32m+[m[32mecho.[m
[32m+[m[32mecho Please set the JAVA_HOME variable in your environment to match the[m
[32m+[m[32mecho location of your Java installation.[m
[32m+[m
[32m+[m[32mgoto fail[m
[32m+[m
[32m+[m[32m:init[m
[32m+[m[32m@rem Get command-line arguments, handling Windows variants[m
[32m+[m
[32m+[m[32mif not "%OS%" == "Windows_NT" goto win9xME_args[m
[32m+[m
[32m+[m[32m:win9xME_args[m
[32m+[m[32m@rem Slurp the command line arguments.[m
[32m+[m[32mset CMD_LINE_ARGS=[m
[32m+[m[32mset _SKIP=2[m
[32m+[m
[32m+[m[32m:win9xME_args_slurp[m
[32m+[m[32mif "x%~1" == "x" goto execute[m
[32m+[m
[32m+[m[32mset CMD_LINE_ARGS=%*[m
[32m+[m
[32m+[m[32m:execute[m
[32m+[m[32m@rem Setup the command line[m
[32m+[m
[32m+[m[32mset CLASSPATH=%APP_HOME%\gradle\wrapper\gradle-wrapper.jar[m
[32m+[m
[32m+[m[32m@rem Execute Gradle[m
[32m+[m[32m"%JAVA_EXE%" %DEFAULT_JVM_OPTS% %JAVA_OPTS% %GRADLE_OPTS% "-Dorg.gradle.appname=%APP_BASE_NAME%" -classpath "%CLASSPATH%" org.gradle.wrapper.GradleWrapperMain %CMD_LINE_ARGS%[m
[32m+[m
[32m+[m[32m:end[m
[32m+[m[32m@rem End local scope for the variables with windows NT shell[m
[32m+[m[32mif "%ERRORLEVEL%"=="0" goto mainEnd[m
[32m+[m
[32m+[m[32m:fail[m
[32m+[m[32mrem Set variable GRADLE_EXIT_CONSOLE if you need the _script_ return code instead of[m
[32m+[m[32mrem the _cmd.exe /c_ return code![m
[32m+[m[32mif  not "" == "%GRADLE_EXIT_CONSOLE%" exit 1[m
[32m+[m[32mexit /b 1[m
[32m+[m
[32m+[m[32m:mainEnd[m
[32m+[m[32mif "%OS%"=="Windows_NT" endlocal[m
[32m+[m
[32m+[m[32m:omega[m
[1mdiff --git a/settings.gradle b/settings.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..c5ed98d[m
[1m--- /dev/null[m
[1m+++ b/settings.gradle[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32minclude ':app'[m
[32m+[m[32mrootProject.name = "TableViewApp"[m
\ No newline at end of file[m
