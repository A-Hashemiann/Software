# Angular 17 Module Training Guide

## Introduction to Angular Modules
Angular applications are divided into modules. A module is a container for a cohesive block of code dedicated to an aspect of the application. Angular has two types of modules:

- **Feature Modules**: These modules group together related components, directives, pipes and providers for a specific feature of your application. They are loaded lazily to speed up initial load time.
  These modules encapsulate a specific feature of your application. For example, you might have a dashboard feature that displays various data visualizations. All the components, directives, pipes, and    services related to this feature would be grouped into one feature module. Feature modules are typically loaded lazily to improve the initial load time of the application.
  
 ```js
import { NgModule } from '@angular/core';
import { SharedModule } from '../shared/SharedModule';
import { DashboardComponent } from './dashboard/dashboard.component';
import { ProjectComponent } from './project/project.component';
@NgModule({
 imports: [
   NgModule,
   SharedModule
 ],
 declarations: [ DashboardComponent, ProjectComponent ]
})
export class DashboardModule { }
 ```
- **Core Module**: The core module is used for singleton services and single-use components like navigation bars, footers, etc. These services and components are only instantiated once throughout the application. The core module should only be imported once in the root module.
```js
import { NgModule, Optional, SkipSelf } from '@angular/core';

import { ApiService } from './services/api.service';

@NgModule({
 providers: [ ApiService ]
})
export class CoreModule {
 constructor(@Optional() @SkipSelf() parent: CoreModule) {
   if (parent) {
     throw new Error('Import CoreModule in the root module only!!!');
   }
 }
}
```
- **Root Module**: The root module is the top-level module that tells Angular how to assemble the application. The root module is conventionally named `AppModule`.
- **Shared Module**: The shared module is used to organize and expose common components, directives, and pipes that are used across multiple feature modules. By placing these common elements in a shared module, you can reduce duplication and make your codebase more maintainable.
```js

```
